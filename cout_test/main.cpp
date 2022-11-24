#include<iostream>
#include"Person.h"
#include"Student.h"


int main()
{
	
	Student* s = new Student(100,1,150);
	s->StudentClass();
	return 0;
}