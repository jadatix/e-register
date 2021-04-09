#pragma once
#include "Person.h"

/**
 * @class Teacher @file Teacher.h
 * 
 * @brief Клас описує вчителя
 * 
 */
class Teacher : public Person
{
public:
	Teacher() = default;

	Teacher(std::string_view name, std::string_view surname);

	Teacher(std::string_view name, std::string_view surname, std::string_view subject);

private:
	std::string subject {};
};