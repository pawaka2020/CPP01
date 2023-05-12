/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

//assign pointers to each member function then have the functions trigger
//according to which element inside 'list' that matches 'level'.
//only executes a member function if 'level' matches an element in 'list' (i < 4)
//or else nothing happens.
void Harl::complain(std::string level)
{
	void (Harl::*functionPointer[4]) (void) = {
		&Harl::debug, &Harl::info, &Harl::warning, &Harl::error
	};
	std::string list[4] = {
		"DEBUG", "INFO", "WARNING", "ERROR"
	};
	
	int i = 0;
	while (list[i] != level && i < 4) i++;
	if (i < 4) (this->*(functionPointer[i]))();
}

void Harl::debug()
{
	std::cout << "Waaah I hate debugging!";
	std::cout << std::endl;
}

void Harl::info()
{
	std::cout << "Why is there no info given, god dammit....stop ghosting me!";
	std::cout << std::endl;
}

void Harl::warning()
{
	std::cout << "Do not cross this line! I warn you!";
	std::cout << std::endl;
}

void Harl::error()
{
	std::cout << "Error, data not found. I just don't want to bother anymore.";
	std::cout << std::endl;
}