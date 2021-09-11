#include "span.hpp"

Span::Span(void) {}

Span::Span(unsigned int size) {
	_spanStorage.reserve(size);
	_capasity = size;
}

Span::Span(Span const & src) {
	*this = src;
}

Span::~Span(void) {}

Span&	Span::operator=(Span const & src) {
	_spanStorage = src._spanStorage;
	_capasity = src._capasity;
	return (*this);
}

void	Span::addNumber(int nb) throw(OutOfRangeException) {
	if (_spanStorage.size() >= _capasity)
		throw (OutOfRangeException());
	_spanStorage.push_back(nb);
}

long		Span::shortestSpan(void) throw(NoSpanToFindException) {
	if (_spanStorage.size() < 2)
		throw (NoSpanToFindException());
	
	std::vector<int>::iterator	i = _spanStorage.begin();
	std::vector<int>::iterator	j = _spanStorage.begin();
	std::vector<int>::iterator	ite = _spanStorage.end();
	long						tmpSp = 0;
	long						shortestSp = longestSpan();

	std::sort(i, ite);

	j++;
	while (j != ite) {
		tmpSp = *j - *i;
		if (tmpSp < shortestSp)
			shortestSp = tmpSp;
		i++;
		j++;
	}
	return (shortestSp);
}

long		Span::longestSpan(void) throw(NoSpanToFindException) {
	if (_spanStorage.size() < 2)
		throw (NoSpanToFindException());

	std::vector<int>::iterator	itb = _spanStorage.begin();
	std::vector<int>::iterator	ite = _spanStorage.end();
	int							maxNb = *(std::max_element(itb, ite));
	int							minNb = *(std::min_element(itb, ite));

	return (static_cast<long>(maxNb - minNb));
}

void	Span::fillWithRandom(int maxNb) {
	for (unsigned int i = _spanStorage.size(); i < _capasity; i++)
		addNumber(rand() % maxNb);
}
