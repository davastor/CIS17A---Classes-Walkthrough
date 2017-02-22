#include "Student.h"
using namespace std;

Student::Student(string name)
{
	_name = name;
}


Student::~Student()
{
}

string Student::GetName()
{
	return _name;
}
