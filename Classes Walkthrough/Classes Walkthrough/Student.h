#pragma once
#include <string>
using namespace std;

class Student
{
private:
	string _name;

public:
	Student(string name);
	~Student();
	string GetName();
};


