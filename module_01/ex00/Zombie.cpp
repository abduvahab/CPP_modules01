/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:07:57 by areheman          #+#    #+#             */
/*   Updated: 2022/12/08 15:51:58 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie::Zombie(void)
{
	//std::cout<<"born a Zombie without name!"<<std::endl;
}

Zombie::Zombie(std::string name)
{
	//std::cout<<"born a Zombie with name!"<<std::endl;
	this->name = name;
}
Zombie::~Zombie()
{
	std::cout<<this->name;
	std::cout<<" : is destructed"<<std::endl;
}

void	Zombie::announce(void)
{
	std::cout<<this->name;
	std::cout<<": BraiiiiiiiinnnzzzZ..."<<std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}