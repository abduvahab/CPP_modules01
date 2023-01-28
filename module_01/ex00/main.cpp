/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:07:19 by areheman          #+#    #+#             */
/*   Updated: 2022/12/14 11:41:54 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

int	main(void)
{
	Zombie	z_stack;
	Zombie*	z_heap;
	
	randomChump("z_stack2");
	
	z_stack.setName("z_stack1");
	z_stack.announce();
	
	z_heap = newZombie("Heap");
	z_heap->announce();
	delete z_heap;
}