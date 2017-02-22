#include "Course.h"
#include "Teacher.h"
#include <string>
using namespace std;

Course::Course(string name, string description, Teacher teacher) : _teacher(teacher)
{
	_name = name;
	_description = description;
}

Course::~Course()
{
}

bool Course::EnrollStudent(Student newStudent, int position)
{
	if (position <= 9 &&_students[position].GetName() == "Null")
	{
		_students[position] = newStudent;
		return true;
	}

	return false;
}

string Course::GetClassInfo()
{
	string info = "Course Information for " + _name + "\n";
	info += _description + "\n" + _teacher.GetName() + "\n";
	info += "-----------------\n";
	for (auto student : _students)
	{
		if (student.GetName() != "Null")
			info += student.GetName() + "\n";
	}

	return info;
}
