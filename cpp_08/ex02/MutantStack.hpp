/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkoyamba <mkoyamba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 10:58:39 by mkoyamba          #+#    #+#             */
/*   Updated: 2023/05/26 10:59:45 by mkoyamba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T> class MutantStack : public std::stack<T>{

	public:

		MutantStack() : std::stack<T>() {}
		MutantStack(const MutantStack& from) {*this = from;}
		virtual ~MutantStack() {}

		MutantStack& operator=(const MutantStack& from){
			std::stack<T>::operator=(from);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin() {return (std::stack<T>::c.begin());}
		iterator	end() {return (std::stack<T>::c.end());}
	
};

#endif