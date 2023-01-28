/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:29:12 by areheman          #+#    #+#             */
/*   Updated: 2022/12/13 12:18:29 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <string> 

class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		Weapon(const Weapon& weapon);
		~Weapon();
		std::string&	getType();
		void			setType(std::string type);
};

#endif