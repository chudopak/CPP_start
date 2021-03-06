#include "Sed.hpp"

Sed::Sed(void) {}

Sed::~Sed(void) {
	if (_ofs.is_open())
		_ofs.close();
	if (_ifs.is_open())
		_ifs.close();
}

bool	Sed::openOutputFile(std::string file) {
	_ofs.open(file, std::ofstream::trunc);
	if (!_ofs.is_open())
		return (false);
	return (true);
}

bool	Sed::openInputFile(std::string file) {
	_ifs.open(file, std::ifstream::in);
	if (!_ifs.is_open())
		return (false);
	return (true);
}

std::string		Sed::reedFile(void) {
	std::string	buff;
	std::string	tmp;

	while (!_ifs.eof()) {
		getline(_ifs, tmp);
		buff += tmp;
		if (!_ifs.eof())
			buff += "\n";
	}
	return (buff);
}

int		Sed::replace(std::string buff, std::string s1, std::string s2) {
	size_t		index;
	size_t		checker;
	std::string	s3;
	int			s3_len = 0;
	int			replacedItems = 0;

	if (!_ifs.is_open() || !_ofs.is_open() || s1.empty() || s2.empty())
		return (-1);
	if ((checker = s2.find(s1)) != std::string::npos) {
		s3 = s2;
		s3.erase(checker, s1.length() + checker);
		s3_len = s3.length();
	}
	index = buff.find(s1, 0);
	while (index != std::string::npos) {
		buff.erase(index, s1.length());
		buff.insert(index, s2);
		index = buff.find(s1, index + s3_len + 1);
		replacedItems++;
	}
	_ofs << buff;
	return (replacedItems);
}