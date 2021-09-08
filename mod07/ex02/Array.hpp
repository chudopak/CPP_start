#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
private:
	T*				_array;
	unsigned int	_size;

	void			_copyArray(Array const &src);
public:
	Array(void);
	Array(unsigned int n);
	Array(Array const &src);
	~Array(void);

	class OverloadExeption : public std::exception
	{
	public:
		virtual const char *	what(void) const throw() {
			return ("Element out of limits");
		}
	};

	Array&			operator=(Array const &src);
	T&				operator[](int const index) const;

	void			freeArray(void);

	unsigned int	size(void) const;
};

template<typename T>
Array<T>::Array(void) {
	_size	= 0;
	_array	= nullptr;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	_size = n;
	if (_size)
		_array = new T[_size];
	else
		_array = nullptr;
}

template<typename T>
Array<T>::Array(Array<T> const & src) {
	*this = src;
}

template<typename T>
Array<T>::~Array(void) {
	if (_array)
		delete [] _array;
}

template<typename T>
void Array<T>::_copyArray(Array<T> const &src) {
	for (unsigned int i = 0; i < _size; i++)	
		_array[i] = src._array[i];
}


template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const &src) {

	if (_size == src.size())
		_copyArray(src);
	else if (_size)
		freeArray();

	_size = src.size();
	if (_size) {
		_array = new T[_size];
		_copyArray(src);
	} else {
		_array = nullptr;
	}
	return (*this);
}

template<typename T>
T&		Array<T>::operator[](int const index) const {
	if (index < 0 || _size <= static_cast<unsigned int>(index))
		throw OverloadExeption();
	return (_array[index]);
}

template<typename T>
unsigned int	Array<T>::size(void) const {
	return (_size);
}

template<typename T>
void	Array<T>::freeArray(void) {
	if (_size)
		delete [] _array;
	_array = nullptr;
}

#endif