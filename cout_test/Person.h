#pragma once
#include<iostream>
#define  ÄÐ 0;
#define Å® 1;
//extern int b = 10;
static int a = 0;

class Person
{
	int m_age ;
	int m_gender ;
	float m_high ;
	

public:
	explicit Person(int age,int gender,float high);
	~Person();

	int GetAge();
	int GetGender();
	float GetHigh();

	void SetAge(int age = 10);
	void SetGender(int gender = 0);
	void SetHigh(float high = 110);

	void Live();



};

