#include "Teacher.h"
#include "Course.h"
#include "Student.h"
#include <iostream>

int main()
{
	Teacher james = Teacher("James Wilson");
	Course cis17 = Course("CIS-17A", "C++: Objected-Oriented Programming", james);
	Student danh = Student("Danh");
	Student alan = Student("Alan");

	cis17.EnrollStudent(danh, 0);
	cis17.EnrollStudent(alan, 1);
	
	cout << cis17.GetClassInfo() << endl;

	getchar();
	return 0;
}