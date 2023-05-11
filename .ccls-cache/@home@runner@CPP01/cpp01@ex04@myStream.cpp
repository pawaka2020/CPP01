/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myStream.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:58:47 by aeryilma          #+#    #+#             */
/*   Updated: 2022/12/21 00:40:19 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "myStream.hpp"
#include "iostream"

myStream::myStream(char *filename)
{
	std::ifstream inFile(filename);
	std::string ret = "";
	std::string tmp;

	while( getline(inFile, tmp) )
	{
		ret += tmp + "\n";
	}
	//finally fill in the fields
	_text = ret;
	_filename = filename;
}

//intriguingly, you set file name here.
//write to output file and then close stuff in destructor
myStream::~myStream()
{
	_filename += ".replace";
	std::cout << _filename << " is created." << std::endl;
	std::ofstream outfile(_filename);
	outfile << _text;
	outfile.close();
}

std::string myStream::getText()
{
	return _text;
}

void myStream::replace(char *src, char *dest)
{
	std::string newString = "";
	//converts _text to a C-style string with a null terminator at the end.
	//why not just do this in the constructor?
	const char *str = _text.c_str();

	//might as well set all three ints as 0 already from the start.
	int i = 0;
	int	j, k;
	//while the char is not null.
	while (str[i])
	{
		j = 0;
		k = 0;
		//when there is a match, copy
		while(str[i + j] == src[k])
		{
			j++;
			k++;
			//moves forward src, then adds dest to newstring
			if (!src[k])
			{
				i += j;
				newString += dest;
			}
		}
		//why not put this inside the loop?
		newString += str[i++];
	}
	_text = newString;
}
