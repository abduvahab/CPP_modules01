/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:23:31 by areheman          #+#    #+#             */
/*   Updated: 2022/12/09 10:54:45 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name)
{
	std::string ss;
	Zombie* horde = NULL;
	
	if (N <= 0)
		return (horde);
	horde = new Zombie[N];
	for(int i = 0; i < N; i++)
	{
		ss = std::to_string(i);
		ss = name + ss;
		horde[i].setName(ss);
	}
	return (horde);	
}

void	setName_horde(Zombie* horde, std::string name, int N)
{
	std::string ss;
	
	if (horde == NULL)
		return ;
	for(int i = 0; i < N; i++)
	{
		ss = std::to_string(i);
		ss = name + ss;
		horde[i].setName(ss);
	}
}

void	announce_horde(Zombie* zoms, int N)
{
	if (zoms == NULL)
		return ;
	for(int i =0; i < N; i++)
		zoms[i].announce();
}