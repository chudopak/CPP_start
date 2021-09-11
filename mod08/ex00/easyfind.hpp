#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template<class T>
typename T::iterator easyFind(T& container, int value)
{
	typename T::iterator result = std::find(container.begin(), container.end(), value);

	if (*result != value)
		throw std::exception();
	return result;
}

#endif