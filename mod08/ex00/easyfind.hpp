#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <array>
# include <vector>
# include <deque>
# include <list>

template<typename T>
typename T::const_iterator	easyFind(T const & array, int nb) {
	typename T::const_iterator it;

	it = std::find(array.begin(), array.end(), nb);
	if (*it != nb)
		throw std::exception();
	return (it);
}

/* template<class T>
typename T::const_iterator easyFind(const T& container, int value)
{
	typename T::const_iterator result = std::find(container.begin(), container.end(), value);

	if (*result != value)
		throw std::exception();
	return result;
} */
#endif