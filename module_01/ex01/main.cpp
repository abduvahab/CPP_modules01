/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 10:24:23 by areheman          #+#    #+#             */
/*   Updated: 2022/12/09 11:00:51 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* zombieHorde(int N, std::string name);
void	setName_horde(Zombie* horde, std::string name, int N);
void	announce_horde(Zombie* zoms, int N);

int	main(void)
{
	{
		int	N;
		
		std::cout<<"###test1###"<<std::endl;
		N = 5;
		Zombie	z_stack("stack1");
		Zombie* zoms = zombieHorde(N, "heaps");
		z_stack.announce();
		
		//return a pointer to first zombie;
		(*zoms).announce();
		
		// announce all zombies
		announce_horde(zoms, N);
		delete[]	zoms;
	}
	
	{
		int	N;
		
		std::cout<<"###test2###"<<std::endl;
		N = 0;
		Zombie	z_stack("stack2");
		Zombie* zoms = zombieHorde(N, "heaps");
		z_stack.announce();
		announce_horde(zoms, N);
		delete[]	zoms;
	}

	{
		int	N;
		
		std::cout<<"###test3###"<<std::endl;
		N = -1;
		Zombie	z_stack("stack3");
		Zombie* zoms = zombieHorde(N, "heaps");
		z_stack.announce();
		announce_horde(zoms, N);
		delete[]	zoms;
	}
}