/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//Creates an array of 'Zombie' instances of 'size' with 'name' given to each.
Zombie* zombieHorde(const size_t size, const std::string& name){
	Zombie *horde = new Zombie[size];
	for (size_t i = 0; i < size; i++){
		horde[i].setName(name);
	}
	return horde;
}
