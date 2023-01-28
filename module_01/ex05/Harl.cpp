/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:06:26 by areheman          #+#    #+#             */
/*   Updated: 2022/12/14 17:32:05 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.h"

void	Harl::debug(void)
{
	std::cout<<"this is debug level"<<std::endl;
}

void	Harl::info(void)
{
	std::cout<<"this is info level"<<std::endl;
	
}

void	Harl::warning(void)
{
	std::cout<<"this is warning level"<<std::endl;
	
}

void	Harl::error(void)
{
	std::cout<<"this is error level"<<std::endl;
	
}

void	Harl::complain(std::string string)
{
	int	i;
	void	(Harl::*function[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	i = 0;
	while(i < 4)
	{
		if (string == level[i])
		{
			(this->*function[i])();
			break;
		}
		i++;
	}
	if (i == 4)
		std::cout<<"no match for any levels"<<std::endl;
}