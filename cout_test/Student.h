#pragma once
#include<iostream>
#include<string>
#include"Person.h"
using std::string;

class Student:public Person
{
	string stu_Class;
	string do_HomeWork;
	
public:

	void SetClass(string );
	void SetHomeWork(string );
	string GetClass();
	string GetHomeWork();

	void DoHomeWork();
	void StudentClass();

	explicit Student(int age, int gender, float high, string s_string = "ÈýÄê¶þ°à") :Person(age, gender, high) 
	{
		this->stu_Class = s_string;
	};
};

