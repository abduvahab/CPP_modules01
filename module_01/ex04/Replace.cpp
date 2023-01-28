/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: areheman <areheman@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:30:04 by areheman          #+#    #+#             */
/*   Updated: 2022/12/14 15:53:20 by areheman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Replace.h"

Replace::Replace(std::string filename, std::string s1, std::string s2)\
		:filename(filename), s1(s1),s2(s2)
{
		//std::cout<<this->filename<<" is created "<<std::endl;
}

Replace::~Replace(){}

bool	Replace::check_file()
{
	this->ifile.open(this->filename);
	if (this->ifile.fail())
		return (false);
	if (this->ifile.is_open())
		return(true);
	return (false);
}

void	Replace::get_content()
{
	while(this->ifile.good())
	{
		std::string tem1;
		std::string tem2;
		std::getline(this->ifile, tem1);
		if (this->ifile.eof())
			tem2 = tem1;
		else
			tem2 = tem1 + "\n";
		this->old_content = this->old_content + tem2;
	}
	this->ifile.close();
}

void	Replace::change_string()
{
	std::string::size_type found;
	found = this->old_content.find(this->s1);
	while (found != std::string::npos)
	{
		this->old_content.erase(found, this->s1.length());
		this->old_content.insert(found,this->s2);
		found = this->old_content.find(this->s1, found);
	}
}

bool	Replace::write_content()
{
	this->newfile = this->filename + ".replace";
	this->ofile.open(this->newfile);
	if (ofile.fail())
		return (true);
	this->ofile<<this->old_content;
	this->ofile.close();
	return (false);
}

bool	Replace::is_file_empty()
{
	if (this->old_content.empty())
		return (true);
	return (false);
}

