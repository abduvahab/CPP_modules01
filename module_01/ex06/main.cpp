/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:48:41 by areheman          #+#    #+#             */
/*   Updated: 2022/12/15 11:21:18 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

int	main(int n, char **s)
{
	if (n != 2)
		std::cout<<"you have to enter two arguments!"<<std::endl;
	else
	{
		Harl	harl;
		std::string string(s[1]);
		harl.complain(string);		
	}
}