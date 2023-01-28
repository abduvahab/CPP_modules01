/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 13:07:42 by areheman          #+#    #+#             */
/*   Updated: 2022/12/08 15:51:33 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	name;
	
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);
};

#endif