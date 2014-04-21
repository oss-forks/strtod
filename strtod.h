#ifndef __e6bf166bfc24b9468ec6be2412313e79__
#define __e6bf166bfc24b9468ec6be2412313e79__

#ifdef __cplusplus
#include <string>
extern "C" {
#endif

double p_strtod(const char * string, char **endPtr);

#ifdef __cplusplus
}
bool strToFloat(const std::string & str, float & val);
bool strToDouble(const std::string & str, double & val);
#endif

#endif
