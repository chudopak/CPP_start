#ifndef EXCEPTION_HPP
# define EXCEPTION_HPP

# include <exception>

class Exceptions
{
public:
	class ExistTypeToConvertNotFoundException : public std::exception {
	public:
		virtual const char *	what(void) const throw() {
			return ("Argument doesn't match any needed type: <char> <int> <double> <float>");
		}
	};
	class NotEnoughArgumentsException : public std::exception {
	public:
		virtual const char *	what(void) const throw() {
			return ("There must be one scalar type: <char> <int> <double> <float>");
		}
	};
};

#endif
