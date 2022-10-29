/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:10:06 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/10/29 22:56:43 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

void	moveContact(PhoneBook *book)
{
	for (int n = 7; n > 0; n--)
		book->repertory[n] = book->repertory[n - 1];
}

void	newContact(PhoneBook *book)
{
	std::string	buffer;

	std::cout << "New contact:\n\nfirstname: ";
	std::cin >> buffer;
	book->repertory[0].first_name = buffer;
	std::cout << "lastname: ";
	std::cin >> buffer;
	book->repertory[0].last_name = buffer;
	std::cout << "nickname: ";
	std::cin >> buffer;
	book->repertory[0].nickname = buffer;
	std::cout << "phone number: ";
	std::cin >> buffer;
	book->repertory[0].phone_number = buffer;
	std::cout << "darkest secret: ";
	std::cin >> buffer;
	book->repertory[0].darkest_secret = buffer;
}

void	displayContact(Contact contact, int n)
{
	int	len;

	std::cout << n << "         |";
	len = contact.first_name.length();
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && len > 10)
			std::cout << ".";
		else if (i < len)
			std::cout << contact.first_name[i];
		else
			std::cout << " ";
	}
	std::cout << "|";
	len = contact.last_name.length();
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && len > 10)
			std::cout << ".";
		else if (i < len)
			std::cout << contact.last_name[i];
		else
			std::cout << " ";
	}
	std::cout << "|";
	len = contact.nickname.length();
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && len > 10)
			std::cout << ".";
		else if (i < len)
			std::cout << contact.nickname[i];
	}
}

void	searchContact(PhoneBook book)
{
	int	good = 0;

	std::cout << "Contacts: \n" << std::endl;
	std::cout << "INDEX     |FIRST NAME|LAST NAME |NICKNAME\n" << std::endl;
	for (int n = 0; n < 8; n++)
	{
		if (book.repertory[n].first_name.compare("") != 0)
		{
			displayContact(book.repertory[n], n);
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

int	instruction(void)
{
	std::string	buffer;

	std::cout << "Please, enter ADD, SEARCH or EXIT." << std::endl;
	std::cin >> buffer;
	if (buffer.compare("ADD") == 0)
		return (0);
	else if (buffer.compare("SEARCH") == 0)
		return (1);
	else if (buffer.compare("EXIT") == 0)
		return (2);
	else
		return (instruction());
}

int	main(void)
{
	PhoneBook	book;
	int			n;

	while (1)
	{
		n = instruction();
		if (n == 2)
			return (0);
		else if (n == 0)
		{
			moveContact(&book);
			newContact(&book);
		}
		else
			searchContact(book);
	}
	return (0);
}