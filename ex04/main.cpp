







#include <iostream> //for 'good', but more proper is to use <ios>
#include <fstream> //for std::ifstream and std::ofstream
#include <string> //for std::string, and getline.
#include <sstream>

int printError(const std::string &message){
	std::cout << "Error : " + message << std::endl;
	return 1;
}

void replace(std::ofstream &ofStream, std::string oldStr, std::string newStr, std::string buffer){
	size_t	pos = buffer.find(oldStr);
	//if 'oldStr' not found inside buffer
	if (pos == std::string::npos)
	{
		ofStream << buffer;
		return ;
	}
	else
	{
		//fill 'ofStream' first with portion of buffer before occurence of 'oldStr'
		ofStream << buffer.substr(0, pos);
		//then fill 'ofStream' with 'newStr'
		ofStream << newStr;
		//repeat the function recursively but with buffer alread shifted by (pos + oldStr.length()) bytes
		replace(ofStream, oldStr, newStr, buffer.substr(pos + oldStr.length()));
	}
}

int	main(int argc, char **argv){
	if (argc != 4) return (printError("wrong arguments"));
	std::cout << std::string("starting ") + argv[0] << std::endl;
	
	std::string file = argv[1];
	std::string replacedFile = file + ".replace";
	std::string oldStr = argv[2];
	std::string newStr = argv[3];
	
	std::ifstream ifStream;
	ifStream.open(file.c_str());
	if (!ifStream.good()) {
		ifStream.close();
		return (printError("failed to open " + file));
	}
	std::ofstream ofStream;
	ofStream.open(replacedFile.c_str());
	if (!ofStream.good()) {
		ofStream.close();
		return (printError("failed to open) " + replacedFile));
	}

	std::string buffer;
	while (getline(ifStream, buffer))
		replace(ofStream, oldStr, newStr, buffer + '\n');

	ifStream.close();
	ofStream.close();
	return (0);
}