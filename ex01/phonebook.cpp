/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 02:37:38 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/01/08 17:15:58 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void fill_phonebook(Phonebook *phone);

int cmp_cmdl(const std::string cmdl)
{
	if (cmdl.empty())
		return 0;
	return 1;
}

void fill_phonebook(Phonebook *phone)
{
	std::string raw_cmdl;
	std::string cmdl;
	getline(std::cin, raw_cmdl);
	
	
	while(cmp_cmdl(cmdl))
	{
		if (cmdl == "SEARCH")
		{
			std::cout << "SEARCH" << std::endl;
		}
		else if (cmdl == "EXIT")
		{
			std::cout << "exit" << std::endl;
			exit(1);
		}
		else if (cmdl ==  "ADD")
		{
			std::cout << "add" << std::endl;
		}
		getline(std::cin, cmdl);
	}
}
int main()
{
	Phonebook phonebook;
	fill_phonebook(&phonebook);
}