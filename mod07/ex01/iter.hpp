#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void	iter(T *array, size_t size, void(*f)(T const &)) {

	if (array) {
		for (size_t i = 0; i < size; i++) {
			f(array[i]);
		}
	}
}

template <typename T>
void	print(T const & variable) {

	std::cout << variable << std::endl;
}

#endif