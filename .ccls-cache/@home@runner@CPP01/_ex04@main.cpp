#include <iostream> //for 'good', but more proper is to use <ios>
#include <fstream> //for std::ifstream and std::ofstream
#include <string> //for std::string, and getline.
#include <sstream>
#define ARGS 0
#define INPUT 1
#define OUTPUT 2

int	printError(int err)
{
	if (err == ARGS)
		std::cerr << "Error : wrong number of arguments, use ./replace file s1 s2" << std::endl;
	else if (err == INPUT)
		std::cerr << "Error : input file" << std::endl;
	else if (err == OUTPUT)
		std::cerr << "Error : output file" << std::endl;
	return (1);
}

//go here after 'main'
void	replaceStrings(std::ofstream &fileOut, std::string s1, std::string s2, std::string input)
{
	size_t	pos;
	size_t	toSkip;
	
	//finds position of the string to replace in the line.
	pos = input.find(s1);

	//this is basically logic for 'if this string is not found in the line'
	if (pos == std::string::npos)
	{
		fileOut << input;
		return ;
	}
	//
	else
	{
		//put into the Outfile parts before the string, then put into it the replaced string.
		fileOut << input.substr(0, pos);
		fileOut << s2;
		//repeat the process but skipping the part that has been replaced
		toSkip = pos + s1.length();
		replaceStrings(fileOut, s1, s2, input.substr(toSkip));
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	fileIn;
	std::ofstream	fileOut;
	
	std::string		s1;
	std::string		s2;
	std::string		buff;
	std::string		file;
	std::string		fileReplace;

	//forces the program to have 3 parameters only, no more, no less.
	//I'll personally just KISS and print error "Error: incorrect arguments"
	if (argc != 4)
		return (printError(ARGS));

	//program param setting. 
	//file set as argv[1]
	//str1 and str2 set as argv[2] and argv[3] respectively.
	file = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	//basically attempts to open the file, but if can't returns error.
	fileIn.open(file.c_str());
	if (fileIn.good() == false)
		return (printError(INPUT));

	//creates an output file with the same name, but with added .replace. 
	fileReplace = file + ".replace";

	//attempts to open the output file but if can't returns error.
	fileOut.open(fileReplace.c_str());
	if (fileOut.good() == false)
	{
		fileIn.close();
		return (printError(OUTPUT));
	}

	//the 'main meat' of this program.
	//'getline' stores data obtained from fileIn in buff.
	//adds newline to the buffer, then replaces 's1' with 's2', then puts into fileOut.
	//repeat 'getline' until all lines of a file has been read.
	while (getline(fileIn, buff))
		replaceStrings(fileOut, s1, s2, buff + '\n');

	//clean up before ending the program.
	fileIn.close();
	fileOut.close();
	return (0);
}