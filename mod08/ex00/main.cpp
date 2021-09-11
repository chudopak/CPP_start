#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> vector;

	vector.reserve(4);
	vector.push_back(14);
	vector.push_back(2345);
	vector.push_back(1);
	vector.push_back(69);

	try {
		std::vector<int>::iterator res = easyFind(vector, 2345);
		std::cout <<  *res << std::endl;
		std::vector<int>::iterator wrong_res = easyFind(vector, 68);
		std::cout <<  *wrong_res << std::endl;
	} catch (std::exception& ex) {
		std::cout << "Can't Find!" << std::endl;
	}

	std::list<int> lis;
	lis.push_back(11);
	lis.push_back(12);
	lis.push_back(13);
	lis.push_back(9);

	try {
		std::list<int>::iterator res = easyFind(lis, 9);
		std::cout <<  *res << std::endl;
		std::list<int>::iterator wrong_res = easyFind(lis, 100);
		std::cout <<  *wrong_res << std::endl;
	} catch (std::exception& ex) {
		std::cout << "Can't Find!" << std::endl;
	}
	return (0);
}