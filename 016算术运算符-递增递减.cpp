#include<iostream>
using namespace std;

int main16() {

	//ǰ�õ���
	int a = 10;
	++a;//�ñ�����1�Ĳ���
	cout <<"a=" << a << endl;
	//���õ���
	int b = 10;
	b++;//�ñ�����1
	cout << "b=" << b << endl;
	//ǰ�úͺ��õ�����
	//ǰ�õ��� ���ñ�����1�ٽ��б��ʽ����
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << "a2=" << a2 << endl;
	cout << "b2=" << b2 << endl;
	// ���õ��� �Ƚ��б��ʽ�����ٽ��м�1
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << "a3=" << a3 << endl;
	cout << "b3=" << b3 << endl;
	//ǰ�õݼ�

	//���õݼ�

	system("pause");

	return 0;




}