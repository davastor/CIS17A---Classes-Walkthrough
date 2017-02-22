#pragma once
#include <string>
using namespace std;

class Teacher
{
private:
	string _name;

public:
	Teacher();
	Teacher(string name);
	~Teacher();
	string GetName();
};

