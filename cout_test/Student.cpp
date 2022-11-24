#include "Student.h"

void Student::SetClass(string s_class)
{
	this->stu_Class = s_class;
}

void Student::SetHomeWork(string s_homework)
{
	this->do_HomeWork = s_homework;
}

string Student::GetClass()
{
	return this->stu_Class;
}

string Student::GetHomeWork()
{
	return this->do_HomeWork;
}

void Student::DoHomeWork()
{
	std::cout << this->do_HomeWork<<a << std::endl;

}

void Student::StudentClass()
{
	std::cout <<this->GetAge()<<this->GetGender()<<this->GetHigh() << this->stu_Class << std::endl;
}

//Student::Student(int age, int gender, float high) :Person(age, gender, high)
//{
//	std::cout << "这是学生的构造函数" << std::endl;
//}
