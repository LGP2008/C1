#include<iostream>
using namespace std;

int main23() {
	/*��ʾ�û�����߿����������ݷ��������ж�
	��������600����һ��������500�϶���������400��������������Ϊδ���ϱ���
	��һ���������У��������700�ϱ��󣬴���650���廪������600���˴�*/
	//1.��ʾ�û��������
	int score = 0;
	cout << "������ĸ߿�������" << endl;
	cin >> score;
	//2.��ʾ�û�����ķ���
	cout << "������ķ����ǣ�" << score << endl;
	//3.�ж�
	if (score > 600) {
		cout << "��ϲ�㿼��һ����ѧ" << endl;
		if (score > 700) {
			cout << "��ϲ�㿼���˱�����ѧ" << endl;
		}
		else if (score > 650) {
			cout << "��ϲ�㿼�����廪��ѧ" << endl;
		}
		else if (score > 600) {
			cout << "��ϲ�㿼���������ѧ" << endl;
		}
	}
	else if (score > 500) {
		cout << "��ϲ�㿼���˶�����ѧ" << endl;
	}
	else if (score > 400) {
		cout << "��ϲ�㿼����������ѧ" << endl;
	}
	else {
		cout << "δ���ϱ���" << endl;
	}

	system("pause");

	return 0;


}