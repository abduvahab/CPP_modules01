/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:04:13 by areheman          #+#    #+#             */
/*   Updated: 2022/12/14 17:23:17 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.h"

int	main(void)
{
	Harl harl;

	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("ERROR");
	harl.complain("");
	harl.complain("HJHJDFHJ");
}