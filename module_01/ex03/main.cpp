/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:28:26 by areheman          #+#    #+#             */
/*   Updated: 2022/12/13 12:50:31 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.h"
# include "HumanA.h"
# include "HumanB.h"

int	main(void)
{
	{
		Weapon	club = Weapon("crude spiked club");
	
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		
		HumanB jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
