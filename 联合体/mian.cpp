#include<iostream>
//��������׵�ַ�ǹ̶��ġ������幫��һ���ڴ��׵�ַ
// ������ÿ��ֻ�ܴ洢һ��ֵ
//�����������кܶ�����ͣ����ǰ���޸ĸ�ֵ�����޸ĺ������ֵ��Ҫȥ��ǰ���������ݾ�û���ˣ������渳ֵ�Ķ��󸲸ǵ���
//ջ����Ŀռ䶼��������
//������ĳ���Ϊ����Ա�ĳ���
//��������Ƕ��ʽ������ϵͳ��Ӳ�����ݽṹ��������ʹ�����ֻ��߶��ָ�ʽ��������ͬʱʹ�ã������Խ�ʡ�ڴ�ռ䡣
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