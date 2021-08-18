#ifndef KAREN_HPP
# define KAREN_HPP

# include <iostream>
# include <string>

class Karen
{
private:
	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

	struct	_ComplainList {
		std::string	lvl;
		void		(Karen::*f)(void);
	};

public:
	Karen(void);
	~Karen(void);

	void	complain(std::string level);
};

#endif