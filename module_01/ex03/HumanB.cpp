/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:35:19 by areheman          #+#    #+#             */
/*   Updated: 2022/12/13 15:13:30 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.h"

HumanB::HumanB()
{
	std::cout<<"a HumanB is created without name!"<<std::endl;
}

HumanB::HumanB(std::string name):name(name)
{
	std::cout<<this->name;
	std::cout<<": a HumanB is created with name!"<<std::endl;
}

HumanB::~HumanB()
{
	std::cout<<this->name;
	std::cout<<": is destructed !"<<std::endl;	
}

void	HumanB::attack()
{
	std::cout<<this->name<<" attacks with their ";
	std::cout<<this->weapon->getType()<<std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

