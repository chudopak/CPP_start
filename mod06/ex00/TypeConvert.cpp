#include "TypeConvert.hpp"

TypeConvert::TypeConvert(void) {
	_ch = 0;
	_nbInt = 0;
	_nbFloat = 0.0f;
	_nbDouble = 0.0;
}

TypeConvert::TypeConvert(TypeConvert const &src) {
	(void)src;
}

TypeConvert::~TypeConvert(void) {}