/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:49:05 by areheman          #+#    #+#             */
/*   Updated: 2022/12/15 11:40:07 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.h"

void	Harl::debug(void)
{
	std::cout<<"this is debug level"<<std::endl;
	std::cout<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"this is info level"<<std::endl;
	std::cout<<std::endl;
}

void	Harl::warning(void)
{
	std::cout<<"this is warning level"<<std::endl;
	std::cout<<std::endl;
	
}

void	Harl::error(void)
{
	std::cout<<"this is error level"<<std::endl;
	std::cout<<std::endl;
}

void	Harl::complain(std::string level)
{
	int	i;
	
	void	(Harl::*funcs[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0 ;
	while (i < 4)
	{
		if (level == levels[i])
			break;			
		i++;
	}
	switch (i)
	{
		case 0:
				std::cout<<"[ DEBUG ]"<<std::endl;
				(this->*funcs[0])();
		case 1:
				std::cout<<"[ INFO ]"<<std::endl;
				(this->*funcs[1])();
		case 2:
				std::cout<<"[ WARNING ]"<<std::endl;
				(this->*funcs[2])();
		case 3:
				std::cout<<"[ ERROR ]"<<std::endl;
				(this->*funcs[3])();
			break;
		default:
			std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
	}
}