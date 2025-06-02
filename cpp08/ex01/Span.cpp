/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufonten <yufonten@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 11:44:31 by yufonten          #+#    #+#             */
/*   Updated: 2025/06/02 11:44:31 by yufonten         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void): maxSize(5) {
	numbers.reserve(maxSize);
}

Span::Span(unsigned int N): maxSize(N) {
	numbers.reserve(N);
}

Span::Span(const Span &span):  maxSize(span.maxSize) {
	numbers = span.numbers;
}

Span::~Span(void) {}

Span	&Span::operator=(const Span &span) {
	if (this != &span) {
		maxSize = span.maxSize;
		numbers = span.numbers;
	}
	return *this;
}

void	Span::addNumber(int number) {
	if (numbers.size() >= maxSize)
		throw std::runtime_error("Span is full");
	numbers.push_back(number);
}

int	Span::shortestSpan(void) {
	if (numbers.size() <= 1)
		throw std::runtime_error("Not enough numbers to find span");

	std::vector<int> sortedSpan = numbers;
	std::sort(sortedSpan.begin(), sortedSpan.end());
	int minSpan = INT_MAX;
	for (std::vector<int>::iterator it = sortedSpan.begin() + 1; it != sortedSpan.end(); ++it) {
		int diff = *it - *(it - 1);
		if (diff < minSpan)
			minSpan = diff;
	}
	return minSpan;
}

int	Span::longestSpan(void) {
	if (numbers.size() <= 1)
		throw std::runtime_error("Not enough numbers to find span");

	std::vector<int>::iterator minIt = std::min_element(numbers.begin(), numbers.end());
	std::vector<int>::iterator maxIt = std::max_element(numbers.begin(), numbers.end());
	return *maxIt - *minIt;
}
