#include<iostream>
//联合体的首地址是固定的。联合体公用一个内存首地址
// 联合体每次只能存储一个值
//联合体里面有很多个类型，如果前面修改赋值，再修改后面对象赋值，要去找前面对象的内容就没有了，被后面赋值的对象覆盖掉了
//栈分配的空间都是连续的
//联合体的长度为最大成员的长度
//联合体在嵌入式，操作系统和硬件数据结构，数据项使用两种或者多种格式（但不会同时使用），可以节省内存空间。
union test
{
	//char c[4];
	int i;
	double m;
};


int main01()
{
	using namespace std;
	union test a;
	union test b;
	union test c;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c<< endl;
	/*a.c[0] = 0x04;
	a.c[1] = 0x03;
	a.c[2] = 0x02;
	a.c[3] = 0x11;
	cout << hex <<a.i << endl;*/
	//cout << hex <<a.m << endl;

}


struct widget
{
	char brand[20];
	int type;
	union  {
		long id_num;
		char id_char[20];
	};
};


int main()
{
	widget prize;
	if (prize.type==1)
	{
		std::cin >> prize.id_num;
	}
	else
	{
		std::cin >> prize.id_char;
	}



	return 0;
}