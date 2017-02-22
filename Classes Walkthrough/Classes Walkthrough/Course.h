#pragma once
#include <string>
#include "Student.h"
#include "Teacher.h"
using namespace std;

class Course
{
private:
	string _name;
	string _description;
	Student _students[10];
	Teacher _teacher;

public:
	Course(string name, string description, Teacher teacher);
	~Course();

	bool EnrollStudent(Student newStudent, int position);
};

