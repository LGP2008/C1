#include<iostream>
using namespace std;

int main24() {

	//三只小猪称体重

	//创建三只小猪的体重变量
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//输入三只小猪的体重
	cout << "请输入第一只小猪的体重：" << endl;
	cin >> num1;
	cout << "输入第二只小猪的体重：" << endl;
	cin >> num2;
	cout << "输入第三只小猪的体重：" << endl;
	cin >> num3;
	cout << "小猪A的体重为：" << num1 << endl;
	cout << "小猪B的体重为：" << num2 << endl;
	cout << "小猪C的体重为：" << num3 << endl;

	//判断三只小猪的体重
	if (num1 > num2) //A>B
	{
		if (num1 > num3) {
			cout << "A最重" << endl;
		
		}
		else {
			cout << "C最重" << endl;
		}
	
	}
	else {
		if (num2 > num3) {
			cout << "B最重" << endl;
		}
		else {
			cout << "C最重" << endl;
		}
	}
	system("pause");

	return 0;
}