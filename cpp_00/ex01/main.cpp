/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:10:06 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/25 13:04:48 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

void	newContact(PhoneBook *book)
{
	Contact	newContact;
	std::string	buffer;

	std::cout << "New contact:\n\nfirstname: ";
	std::getline(std::cin, buffer);
	if (std::cin.eof())
		exit(127);
	while (!buffer.compare("") || buffer[0] == ' ')
		std::getline(std::cin, buffer);
	newContact.setFirst(buffer);
	std::cout << "lastname: ";
	if (std::cin.eof())
		exit(127);
	std::getline(std::cin, buffer);
	while (!buffer.compare("") || buffer[0] == ' ')
		std::getline(std::cin, buffer);
	newContact.setLast(buffer);
	std::cout << "nickname: ";
	if (std::cin.eof())
		exit(127);
	std::getline(std::cin, buffer);
	while (!buffer.compare("") || buffer[0] == ' ')
		std::getline(std::cin, buffer);
	newContact.setNick(buffer);
	std::cout << "phone number: ";
	if (std::cin.eof())
		exit(127);
	std::getline(std::cin, buffer);
	while (!buffer.compare("") || buffer[0] == ' ')
		std::getline(std::cin, buffer);
	newContact.setPhone(buffer);
	std::cout << "darkest secret: ";
	if (std::cin.eof())
		exit(127);
	std::getline(std::cin, buffer);
	while (!buffer.compare("") || buffer[0] == ' ')
		std::getline(std::cin, buffer);
	newContact.setSecret(buffer);
	book->newContact(newContact);
}

void	displayContact(Contact &contact)
{
	std::cout << std::endl;
	std::cout << contact.getFirst() << ' ' << contact.getLast() << ":\n\n";
	std::cout << "First name: " << contact.getFirst() << std::endl;
	std::cout << "Last name: " << contact.getLast() << std::endl;
	std::cout << "Nickname name: " << contact.getNick() << std::endl;
	std::cout << "Phone number: " << contact.getPhone() << std::endl;
	std::cout << "Darkest secret: " << contact.getSecret() << "\n" <<std::endl;

}

void	displayBookContact(Contact contact, int n)
{
	int	len;

	std::cout << n << "         |";
	len = contact.getFirst().length();
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && len > 10)
			std::cout << ".";
		else if (i < len)
			std::cout << contact.getFirst()[i];
		else
			std::cout << " ";
	}
	std::cout << "|";
	len = contact.getLast().length();
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && len > 10)
			std::cout << ".";
		else if (i < len)
			std::cout << contact.getLast()[i];
		else
			std::cout << " ";
	}
	std::cout << "|";
	len = contact.getNick().length();
	for (int i = 0; i < 10; i++)
	{
		if (i == 9 && len > 10)
			std::cout << ".";
		else if (i < len)
			std::cout << contact.getNick()[i];
	}
}

void	searchContact(PhoneBook book)
{
	std::string	buffer;

	std::cout << "Contacts: \n" << std::endl;
	std::cout << "INDEX     |FIRST NAME|LAST NAME |NICKNAME\n" << std::endl;
	for (int n = 0; n < 8; n++)
	{
		if (book.isContact(n))
		{
			displayBookContact(book.contact(n), n + 1);
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << "Quelle utilisateur voulez-vous afficher? ";
	std::getline(std::cin, buffer);
	if (std::cin.eof())
		exit(127);
	if (buffer.length() > 1 || buffer[0] < '1' || buffer[0] > '8'
		|| !book.isContact((int)buffer[0] - 1 - '0'))
		std::cout << "Invalid index!" << std::endl;
	else
		displayContact(book.contact((int)buffer[0] - 1 - '0'));
}

int	instruction(void)
{
	std::string	buffer;

	std::cout << "Please, enter ADD, SEARCH or EXIT." << std::endl;
	std::getline(std::cin, buffer);
	if (buffer.compare("ADD") == 0)
		return (0);
	else if (buffer.compare("SEARCH") == 0)
		return (1);
	else if (buffer.compare("EXIT") == 0 || std::cin.eof())
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
			newContact(&book);
		else
			searchContact(book);
	}
	return (0);
}