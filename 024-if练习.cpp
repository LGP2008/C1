#include<iostream>
using namespace std;

int main24() {

	//��ֻС�������

	//������ֻС������ر���
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//������ֻС�������
	cout << "�������һֻС������أ�" << endl;
	cin >> num1;
	cout << "����ڶ�ֻС������أ�" << endl;
	cin >> num2;
	cout << "�������ֻС������أ�" << endl;
	cin >> num3;
	cout << "С��A������Ϊ��" << num1 << endl;
	cout << "С��B������Ϊ��" << num2 << endl;
	cout << "С��C������Ϊ��" << num3 << endl;

	//�ж���ֻС�������
	if (num1 > num2) //A>B
	{
		if (num1 > num3) {
			cout << "A����" << endl;
		
		}
		else {
			cout << "C����" << endl;
		}
	
	}
	else {
		if (num2 > num3) {
			cout << "B����" << endl;
		}
		else {
			cout << "C����" << endl;
		}
	}
	system("pause");

	return 0;
}