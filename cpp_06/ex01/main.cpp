/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 10:50:40 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/04/13 10:59:10 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialize.hpp"

int	main(void) {
	Data* data = new Data;
	uintptr_t serial = serialize(data);
	Data* des = deserialize(serial);

	std::cout << "Raw: " << data << std::endl;
	std::cout << "Serialized: " << serial << std::endl;
	std::cout << "Deserialized: " << des << std::endl;

	delete data;
}