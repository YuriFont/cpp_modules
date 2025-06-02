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

};


#endif
