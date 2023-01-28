/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:28:53 by areheman          #+#    #+#             */
/*   Updated: 2022/12/13 15:28:50 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.h"

Weapon::Weapon()
{
	std::cout<<"a weapon is created without name!"<<std::endl;
}

Weapon::Weapon(std::string type):type(type)
{
	std::cout<<this->type;
	std::cout<<": weapon is created with name!"<<std::endl;
}

Weapon::Weapon(const Weapon& weapon)
{
	this->type = weapon.type;
	std::cout<<this->type;
	std::cout<<": weapon is copy consttructed with name!"<<std::endl;
}

Weapon::~Weapon()
{
	std::cout<<this->type;
	std::cout<<": is destructed"<<std::endl;
}

std::string&	Weapon::getType()
{
	//std::string& ref = this->type;
	//return (ref);
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}