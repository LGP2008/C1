#include<iostream>
using namespace std;

int main16() {

	//前置递增
	int a = 10;
	++a;//让变量加1的操作
	cout <<"a=" << a << endl;
	//后置递增
	int b = 10;
	b++;//让变量加1
	cout << "b=" << b << endl;
	//前置和后置的区别
	//前置递增 先让变量加1再进行表达式运算
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2 << endl;
	// 后置递增 先进行表达式计算再进行加1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3=" << a3 << endl;
	cout << "b3=" << b3 << endl;
	//前置递减

	//后置递减

	system("pause");

	return 0;




}