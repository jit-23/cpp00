/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 02:37:30 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/01/10 02:36:50 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define MAX_C  4

#include <iostream>
#include <cstring>
#include <iomanip>

class Contact{
	public:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;

	void get_info()
	{
		std::cout << "enter first name   : ";
		getline(std::cin >> std::ws, first_name);
		
		std::cout << "enter last name    : ";
		getline(std::cin >> std::ws, last_name);
		
		std::cout << "enter nick name    : ";
		getline(std::cin >> std::ws, nickname);
		
		std::cout << "enter phone nbr    : ";
 		getline(std::cin >> std::ws, phone_nbr);		

		std::cout << "enter  dark secret: ";
		getline(std::cin >> std::ws, dark_secret);		
	}
	void display_info(std::string text)
	{
		if(text.length() > 10)
		{
			text.resize(9);
			text.append(".");
		}
		std::cout << std::setfill(' ') << std::setw(10) << text << "|";
	//if(newline)
	//	std::cout << std::setfill(' ') << std::setw(10) << text << std::endl;
	//else

	}
	std::string get_dark_secret(void)
	{
		return (dark_secret);
	}
	private:
		std::string dark_secret;
};

class Phonebook{
	public:
		Contact contact[MAX_C];
};


#endif