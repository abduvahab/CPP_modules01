/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:20:04 by areheman          #+#    #+#             */
/*   Updated: 2022/12/14 15:48:35 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.h"

int	main(int n, char** str)
{
	if (n != 4)
		std::cout<<"you have to enter three arguments!"<<std::endl;
	else
	{
		Replace o_file(str[1], str[2], str[3]);
		if (o_file.check_file() == false)
		{
			std::cout<<"this file cant be open!"<<std::endl;
			return (1);		
		}
		o_file.get_content();
		if (o_file.is_file_empty())
		{
			std::cout<<"empty file cant be replaced!"<<std::endl;
			return (1);
		}
		o_file.change_string();
		if (o_file.write_content())
		{
			std::cout<<"failed to open for write!"<<std::endl;
			return (1);
		}
	}
	return (0);
}