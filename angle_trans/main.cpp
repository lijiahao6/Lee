#include<iostream>
#include<math.h>
#include<numbers>
#include<iomanip>

#define PI  3.141592653589793

int main()
{
	using namespace std;
	int x = 2, y = 2;
	int dx = 0, dy = 0;
	//int angle =45; //ƒÊ ±’Î
	int angle = -45; //À≥ ±’Î
	double xx = (x - dx) * cos(angle * PI / 180) - (y - dy) * sin(angle * PI / 180) + dx;
	double yy = (y - dy) * cos(angle * PI / 180) + (x - dx) * sin(angle * PI / 180) + dy;
	cout << setiosflags(ios::fixed) << setprecision(2);
	cout << xx << "\t" << yy << endl;

	return 0;
}