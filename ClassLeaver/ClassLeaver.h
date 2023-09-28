#pragma once
#ifdef leaver_EXPORTS
	#define leaver_API __declspec(dllexport)
#else
	#define leaver_API __declspec(dllimport)
#endif // leaver_EXPORTS

#include <string>

class Leaver {
public:
	leaver_API std::string leave(std::string name);
};