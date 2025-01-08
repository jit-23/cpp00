/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 02:37:38 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/01/08 03:22:29 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "phonebook.hpp"

void fill_phonebook(class *phone);
int cmp_cmdl(char *cmdl);


int cmp_cmdl(char *cmdl)
{
	if (strcmp(cmdl, EOF))
		return 0;
	return 1;
}

void fill_phonebook(class *phone)
{
	char *cmdl >> cin;

	while(cmp_cmdl(cmdl))
	{
		switch (cmp_cmdl)
		{
		case "SEARCH":
			std::count << "SEARCH" << std::endl;
			break;
		case "EXIT":
			std::count << "exit" << std::endl;
			exit(1);
			break;
		case "ADD":
			std::count << "add" << std::endl;
			break;
		default:
			std::count << "default" << std::endl;

			break;
		}
	}
}
int main()
{
	Phonebook phonebook;
	fill_phonebook(&phonebook);
}