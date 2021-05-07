#pragma once
#include <string>
#ifdef __linux__
	#include <unistd.h>
#endif

#ifdef _WIN32
char* strptime(const char* S, const char* f, struct tm* tm);

void pause();
#endif

void cls();

std::string input_password();