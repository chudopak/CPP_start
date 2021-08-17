#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <string>
# include <fstream>

class	Sed
{
private:
	std::ofstream	_ofs;
	std::ifstream	_ifs;

public:
	Sed(void);
	~Sed(void);

	bool			openOutputFile(std::string file);
	bool			openInputFile(std::string file);
	std::string		reedFile(void);
	int				replace(std::string buff, std::string s1, std::string s2);
};

#endif