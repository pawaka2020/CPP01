/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//constructor
Zombie::Zombie(){
	_name = "";
}

//destructor must show message of zombie destroyed.
Zombie::~Zombie(){
	std::cout << "Zombie '" + _name + "' destroyed." << std::endl;
}

//setter
void Zombie::setName(const std::string& name){
	_name = name;
}

//member function using the field '_name'
void Zombie::announce( void ){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}