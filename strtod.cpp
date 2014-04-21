/* 
 * Copyright (c) 2014 Nikolay Zapolnov
 *
 * Permission to use, copy, modify, and distribute this
 * software and its documentation for any purpose and without
 * fee is hereby granted, provided that the above copyright
 * notice appear in all copies.  Nikolay Zapolnov
 * makes no representations about the suitability of this
 * software for any purpose.  It is provided "as is" without
 * express or implied warranty.
 */
#include "strtod.h"

bool strToFloat(const std::string & str, float & val)
{
	const char * p = str.c_str();
	char * end = nullptr;
	val = static_cast<float>(p_strtod(p, &end));
	return (end && *end == 0);
}

bool strToDouble(const std::string & str, double & val)
{
	const char * p = str.c_str();
	char * end = nullptr;
	val = p_strtod(p, &end);
	return (end && *end == 0);
}
