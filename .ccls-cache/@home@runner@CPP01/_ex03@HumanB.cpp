/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name){
	_name = name;
}

void HumanB::setWeapon(Weapon &weapon){
	_weapon = &weapon;
}

void HumanB::attack(){
	if (_weapon == NULL)
		std::cout << _name << " has no weapon" << std::endl;
	else
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}