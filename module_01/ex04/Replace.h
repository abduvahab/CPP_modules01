/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:29:48 by areheman          #+#    #+#             */
/*   Updated: 2022/12/14 15:44:07 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>
# include <fstream>
# include <string>

class Replace
{
	private:
		std::ifstream ifile;
		std::ofstream ofile;
		std::string filename;
		std::string newfile;
		std::string old_content;
		std::string s1;
		std::string s2;
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();
		bool	check_file();
		void	get_content();
		void	change_string();
		bool	write_content();
		bool	is_file_empty();
		
};

#endif