/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 02:37:38 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/01/10 04:07:16 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void fill_phonebook(Phonebook *phone)
{
	std::string cmdl;
	
	int index = 0;
	
		std::cout << "> valid commands are: 'EXIT'; 'ADD'; 'SEARCH';" << std::endl;
		std::cout << "> otherwise, it will be ignored:" << std::endl;
	do
	{
		std::cout << ">";
		getline(std::cin, cmdl);
		if (std::cin.eof())
			break;
		if (cmdl.compare("SEARCH") == 0)
		{
			int x;
			do
			{
				std::cout << "enter page: ";
				std::cin >> x;
				if (x > MAX_C)
					std::cout << "error: page not avaliable\ntip  :please enter page between 0 and 8" << std::endl;	
			} while (x > MAX_C);
			
			std::cout << "__________ __________ __________ __________" << std::endl;
			phone->contact[x].display_info(phone->contact[x].first_name);
			phone->contact[x].display_info(phone->contact[x].last_name);
			phone->contact[x].display_info(phone->contact[x].nickname);
			phone->contact[x].display_info(phone->contact[x].phone_nbr);
			std::cin.ignore();
			std::cout << std::endl;
		}
		else if (cmdl.compare("ADD") == 0)
		{
			if (index >= MAX_C)
				index = 0;
			phone->contact[index++].get_info();
		}
		else if (cmdl.compare("EXIT") == 0)
		{
			break ;
		}
		else
		{
			std::cout << "invalid syntax:" << std::endl;
		}
	}while(1);
}

int main()
{
	Phonebook phonebook;
	fill_phonebook(&phonebook);
	
}