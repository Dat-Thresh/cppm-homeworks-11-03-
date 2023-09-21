#pragma once
#ifdef CLASSLEAVER_EXPORT
	#define CLASSLEAVER_API __declspec(dllexport)
#else
	#define CLASSLEAVER_API __declspec(dllimport)
#endif // CLASSLEAVER_EXPORT

#include <string>

class Leaver {
public:
	CLASSLEAVER_API std::string leave(std::string name);
};