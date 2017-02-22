#include "Teacher.h"



Teacher::Teacher(string name)
{
	_name = name;
}


Teacher::~Teacher()
{
}

string Teacher::GetName()
{
	return _name;
}
