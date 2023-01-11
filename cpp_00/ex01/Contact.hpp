/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 21:11:14 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/01/11 12:27:41 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class Contact {

public:
	Contact(void);
	~Contact(void);

	std::string	getFirst(void);
	std::string	getLast(void);
	std::string	getNick(void);
	std::string	getPhone(void);
	std::string	getSecret(void);

	void	setFirst(std::string buffer);
	void	setLast(std::string buffer);
	void	setNick(std::string buffer);
	void	setPhone(std::string buffer);
	void	setSecret(std::string buffer);

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif