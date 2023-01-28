/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:06:47 by areheman          #+#    #+#             */
/*   Updated: 2022/12/09 12:18:40 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string		string("HI THIS IS BRAIN");
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout<<"The memory address of the string variable: ";
	std::cout<<&string<<std::endl;
	std::cout<<"The memory address held by stringPTR: ";
	std::cout<<stringPTR<<std::endl;
	std::cout<<"The memory address held by stringREF: ";
	std::cout<<&stringREF<<std::endl;

	std::cout<<"The value of the string variable.: ";
	std::cout<<string<<std::endl;
	std::cout<<"The value pointed to by stringPTR: ";
	std::cout<<*stringPTR<<std::endl;
	std::cout<<"The value pointed to by stringREF: ";
	std::cout<<stringREF<<std::endl;
	
	
}