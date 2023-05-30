/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:20:07 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/30 09:38:36 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <map>
# include <string>
# include <algorithm>

class BitcoinExchange{

	public:
		BitcoinExchange() {};
		BitcoinExchange(const std::string &filename);
		BitcoinExchange(const BitcoinExchange& from);
		~BitcoinExchange() {};
		BitcoinExchange& operator=(const BitcoinExchange& from);

		void 	readData(const std::string &filename);
		double	getExchangeRate(const std::string &date);
		bool	isValidDate(const std::string& date);
		bool	isValidValue(const double &value);

	private:
		std::map<std::string, double> _data;
};

#endif