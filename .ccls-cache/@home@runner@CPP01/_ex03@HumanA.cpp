/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

//Constructor, accepting a name and also a reference to a 'Weapon' instance.
//Accepting a reference allows the 'Weapon' instance to be altered and the
//HumanA itself showing that the 'Weapon'instance passed to it has altered as well.
HumanA::HumanA(const std::string& name, Weapon& weapon): _weapon(weapon){
	_name = name;
}

//Prints a message while also using the 'getType' function embedded inside '_weapon' object.
void HumanA::attack() const {
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}