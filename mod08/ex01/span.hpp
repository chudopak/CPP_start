#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
private:
	unsigned int		_capasity;
	std::vector<int>	_spanStorage;

	Span(void);
public:
	Span(unsigned int size);
	Span(Span const & src);
	~Span(void);

	Span&				operator=(Span const & src);

	class OutOfRangeException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw() {
			return ("Can't pass number - out of capasity");
		}
	};

	class NoSpanToFindException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw() {
			return ("Not enough arguments to find span");
		}
	};

	void				addNumber(int nb) throw(OutOfRangeException);
	long				shortestSpan(void) throw(NoSpanToFindException);
	long				longestSpan(void) throw(NoSpanToFindException);
	void				fillWithRandom(int maxNb);
};

#endif