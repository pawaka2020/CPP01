/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myStream.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeryilma <aeryilma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 23:56:28 by aeryilma          #+#    #+#             */
/*   Updated: 2022/12/21 00:23:19 by aeryilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYSTREAM_HPP
# define MYSTREAM_HPP

#include <string>
#include <fstream>

class myStream{
public:
	//constructor and destructor
	myStream(char *);
	~myStream();
	//getters
	std::string getText();
	//member functions
	void replace(char *, char *);
private:
	//fields
	std::string _text;
	std::string _filename;
};

#endif
