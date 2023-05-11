/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

//Constructor with parameter that sets starting value of its '_type' field.
Weapon::Weapon(const std::string& type){
	_type = type;
}

//Setter to be used when the '_type' field needs to be changed after the class's
//instantiation.
void Weapon::setType(const std::string& type){
	_type = type;
}

//Getter to be used by 'HumanA' and 'HumanB' later in their 'attack' member functions.
std::string Weapon::getType() const{
	return _type;
}