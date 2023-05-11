/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//creates an instance of 'Zombie' on stack
//When the function returns, the zombie object will be automatically destroyed, and its memory will be released from the stack.
//object destroyed at the end of 'randomChump'.
void randomChump(const std::string& name )
{
	Zombie zombie = Zombie();
	zombie.setName(name);
	zombie.announce();
}