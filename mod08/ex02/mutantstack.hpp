#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>
# include <algorithm>

template<typename T>
class	MutantStack : public std::stack<T>
{
public:
	MutantStack(void) {}
	MutantStack(MutantStack const &src) { *this = src; }
	virtual ~MutantStack(void) {}

	MutantStack&	operator=(MutantStack const &src) {
		std::stack<T>::operator=(src);
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator	iterator;

	iterator	begin(void) { return (std::stack<T>::c.begin()); }
	iterator	end(void) {	return (std::stack<T>::c.end()); }
};

#endif