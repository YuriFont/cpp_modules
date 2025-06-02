/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:44:35 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/02 11:44:35 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <climits>

class Span {

	private:

		std::vector<int> numbers;
		unsigned int maxSize;

	public:

		Span(void);
		Span(unsigned int maxSize);
		Span(const Span &span);
		~Span(void);
		Span	&operator=(const Span &span);
		void	addNumber(int number);
		int	shortestSpan(void);
		int	longestSpan(void);

		template <typename Iterator>
		void	addNumber(Iterator begin, Iterator end) {
    		size_t count = std::distance(begin, end);
    		if (numbers.size() + count > maxSize)
        		throw std::runtime_error("Adding range exceeds Span capacity");
    		numbers.insert(numbers.end(), begin, end);
		}

};

#endif
