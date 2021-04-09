#pragma once
#include "Person.h"
#include "Student.h"
#include <optional>

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

	void setPassword(std::string_view password);

	const std::string& getSubject() const;

	const std::string& getPassword() const;

	void setMark(Student& stud, std::optional<int> value);

private:
	std::string subject {};
	std::string password {};
};
