/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-jesu <fde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 02:37:30 by fde-jesu          #+#    #+#             */
/*   Updated: 2025/01/08 16:26:13 by fde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include<iostream>
#include <cstring>
#include <iomanip>

class Contact{
	public:
		char *first_name;
		char *last_name;
		char *nickname;
		int phone_nbr;

	char *get_dark_secret(void)
	{
		return (dark_secret);
	}
	void set_dark_secret(char *new_dark_secret)
	{
		dark_secret = new_dark_secret;
	}
		
	private:
		char *dark_secret;
};

class Phonebook{
	public:
		Contact contact[8];
};


#endif