#pragma once
#include "Teacher.h"
#include <vector>

class Stuff
{
public:
	Stuff() = default;

	/**
     * @brief Функція записує
     * 
     */
	void saveToFile();

	void loadFromFile();

	/**
     * @brief Функція додає нового викладача до колективу
     * 
     * @param newTeacher Об'єкт викладач
     */
	void addTeacher(const Teacher& newTeacher);

	// void deleteTeacher(std::string_view surname, std::string_view name);

	const Teacher& getTeacher(std::string_view surname, std::string_view name) const;

	const Teacher&  signIn(const std::string &password);

private:
	std::vector<Teacher> teachers;
};