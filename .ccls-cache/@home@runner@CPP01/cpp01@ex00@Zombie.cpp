/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 03:25:02 by aeryilma          #+#    #+#             */
/*   Updated: 2022/12/20 03:56:54 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

//set fields with constructor, but with a parameter input.
Zombie::Zombie( std::string name)
{
	_name = name;
}

//destructor must show message of zombie destroyed, dying.
Zombie::~Zombie()
{
	std::cout << "Nooo im dyingggggg. (" << _name << ")" << std::endl;
}

//member function using the field '_name'
void Zombie::announce( void )
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
