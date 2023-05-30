/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 09:23:30 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/30 09:38:02 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <stack>

class RPN {

	public:
		RPN() {};
		RPN(const RPN& from);
		~RPN() {};
		RPN& operator=(const RPN& from);

		bool isValid(const std::string arg);
		void calculate(const std::string arg);

	private:
		std::stack<double> _numbers;

};

#endif