#include "Person.h"

using std::cout;
using std::endl;


 Person::Person(int age,int gender,float high)
{
	 this->m_age = age;
	 this->m_gender = gender;
	 this->m_high = high;
	cout << "����һ�����캯��" << endl;
}

Person::~Person()
{
	cout << "����һ����������" << endl;
}

int Person::GetAge()
{
	return this->m_age;
}

int Person::GetGender()
{
	return this->m_gender;
}

float Person::GetHigh()
{
	return this->m_high;
}


void Person::SetAge(int age)
{
	this->m_age = age;
}


void Person::SetGender(int gender)
{
	 this->m_gender = gender;
}

void Person::SetHigh(float high)
{
	 this->m_high = high;
}

void Person::Live()
{
	cout << "��Ҫ�Է�" << endl;
}

