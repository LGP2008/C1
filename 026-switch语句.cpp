#include<iostream>
using namespace std;

int main26() {

	//switch���
	//����Ӱ����
	//10-9����
	//8-7�ǳ���
	//6-5һ��
	//5������Ƭ

	//1.��ʾ�û���������
	cout << "���749�ֵ�Ӱ�������� 1-10�� ������Ϊ��Ƭ" << endl;
	//2.�û���ʼ���
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ:" << score << endl;
	//3.�����û������֣�������Ӧ������
	switch (score) {
	case 10:
		cout << "����Ϊ�ⲿ��Ӱ�Ǿ���" << endl;
		break; //�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�ⲿ��Ӱ�Ǿ���" << endl;
		break;
	case 8:
		cout << "����Ϊ�ⲿ��Ӱ�Ƿǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ�ⲿ��Ӱ�Ƿǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ�ⲿ��Ӱ��һ��" << endl;
		break;
	case 5:
		cout << "����Ϊ�ⲿ��Ӱ��һ��" << endl;
		break;
	default:
		cout << "����Ϊ�ⲿ��Ӱ����Ƭ" << endl;
		break;
	}
	//if��switch������
	//switchȱ�㣬���ʽ�Ľ�����������ͻ����ַ��ͣ���������һ������
	//switch�ŵ㣬�ṹ������ִ��Ч�ʸ�
	system("pause");

	return 0;
}