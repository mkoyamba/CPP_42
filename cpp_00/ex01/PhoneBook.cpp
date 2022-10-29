/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:02:59 by mkoyamba          #+#    #+#             */
/*   Updated: 2022/10/29 22:24:54 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	for (int n = 0; n < 8; n++)
	{
		this->repertory[n].first_name = "";
		this->repertory[n].last_name = "";
		this->repertory[n].nickname = "";
		this->repertory[n].phone_number = "";
		this->repertory[n].darkest_secret = "";
	}
	return ;
}

PhoneBook::~PhoneBook(void) {
	return ;
}