/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: riramli <riramli@student.42kl.edu.my>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 00:00:00 by riramli           #+#    #+#             */
/*   Updated: 2023/03/03 00:00:00 by riramli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie{
public:
	//constructor and destructor
	//Zombie(const std::string& name);
	Zombie();
	~Zombie();
	//getters
	//setters
	void setName(const std::string& name);
	//member functions
	void announce( void );

private:
	//fields
	std::string _name;
};

//external functions
Zombie* zombieHorde(const size_t size, const std::string& name);

#endif