#include<iostream>
using namespace std;

int main30() {

	//1.打印所有的三位数字
	int num = 100;
	do {
		int a = 0;
		int b = 0;
		int c = 0;
		a = num % 10;
		b = (num / 10) % 10;
		c = num / 100;
		if (num == a*a*a + b*b*b + c*c*c)
		{ cout << num << endl;
		}
		 
	} while (++num < 1000);
	





	system("pause");

	return 0;
}