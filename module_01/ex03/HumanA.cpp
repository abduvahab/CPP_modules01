/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HUmanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:31:37 by areheman          #+#    #+#             */
/*   Updated: 2022/12/13 15:29:58 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanA.h"
/*
HumanA::HumanA()
{
	std::cout<<"a HuamnA is born without name and waepon"<<std::endl;
}
*/
HumanA::HumanA(std::string name, Weapon& weapon):name(name),weapon(weapon)
{
	std::cout<<this->name;
	std::cout<<": a HuamnA is born with name and waepon"<<std::endl;
}

HumanA::~HumanA()
{
	std::cout<<this->name;
	std::cout<<": is destructed !"<<std::endl;
}

void	HumanA::attack()
{
	std::cout<<this->name<<" attack with their ";
	std::cout<<this->weapon.getType()<<std::endl;
}