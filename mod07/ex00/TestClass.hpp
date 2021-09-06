#ifndef TESTCLASS_HPP
# define TESTCLASS_HPP

# include <iostream>

class TestClass
{
private:
	int		_n;
public:
	TestClass(void){};
	TestClass(int n) : _n(n) {};
	~TestClass(void) {};

	int			getN(void) const { return (_n); }

	bool		operator==(TestClass const & src) const { return (_n == src.getN()); }
	bool		operator!=(TestClass const & src) const { return (_n != src.getN()); }
	bool		operator> (TestClass const & src) const { return (_n > src.getN()); }
	bool		operator< (TestClass const & src) const { return (_n < src.getN()); }
	bool		operator<=(TestClass const & src) const { return (_n <= src.getN()); }
	bool		operator>=(TestClass const & src) const { return (_n >= src.getN()); }
};

std::ostream&	operator<<(std::ostream & o, TestClass const & src) {
	o << src.getN() << std::endl;
	return (o);
}

#endif