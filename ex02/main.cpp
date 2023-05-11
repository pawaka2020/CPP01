/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void printMemory(const std::string& str, const std::string* stringPTR, const std::string& stringREF) {
    std::cout << "Memory address of str : " << &str << std::endl;
    std::cout << "Memory address of stringPTR : " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF : " << &stringREF << std::endl;
}

void printValue(const std::string& str, const std::string* stringPTR, const std::string& stringREF){
	std::cout << "Value of str : " << str << std::endl;
	std::cout << "Value of stringREF : " << *stringPTR << std::endl;
	std::cout << "Value of stringPTR : " << stringREF << std::endl;
}

int main(void){
	//a string, its pointer and its reference
	std::string str =  "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string& stringREF = str;

	//prints memory and value of all the three variables.
	printMemory(str, stringPTR, stringREF);
	printValue(str, stringPTR, stringREF);
}