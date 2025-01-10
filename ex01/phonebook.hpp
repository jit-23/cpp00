/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 02:37:30 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/01/10 16:22:44 by fde-jesu         ###   ########.fr       */
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
		
	void get_info()
	{
		get_info("enter first name  : ", first_name);
		get_info("enter last_name   : ", last_name);
		get_info("enter nickname    : ", nickname);
		get_info("enter phone number: ", phone_nbr);
		get_info("enter dark secret : ", dark_secret);
	}
	
	void display_info(std::string text)
	{
		if(text.length() > 10)
		{
			text.resize(9);
			text.append(".");
		}
		if (text == "\n")
			std::cout << std::setw(10) << "" << "|";
		else
			std::cout << std::setw(10) << text << "|";
	}
	void display_user()
	{
			std::cout << "__________ __________ __________ __________" << std::endl;
			display_info(first_name);
			display_info(last_name); // display tem que ser um metodo e 
			display_info(nickname);
			display_info(phone_nbr);
			std::cin.ignore();
			std::cout << std::endl;
	}
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_nbr;
		std::string dark_secret;
		
		void get_info(std::string question, std::string &var)
		{
			std::cout << question ;
			getline(std::cin /* >> std::ws */, var);
			if (std::cin.eof())
				exit(1);
		}

};

class Phonebook{
	public:
		Contact contact[MAX_C];
};

#endif
