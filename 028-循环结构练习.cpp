#include<iostream>
using namespace std;

int main28() {
	//���һ����������ӣ��������õ�ǰʱ����Ϊ��������ӣ�ʹ��ÿ�����г������ɵ��������ͬ
	srand((unsigned int)time(NULL));

//1.����һ�������
	int num = rand() % 100 + 1; //����0-99�������
	cout << "������²������" << endl;
	//2.��ҽ��в²�
	int val = 0;//��Ҳ²������
	while (1) {
		cin >> val;


		//3.�ж���Ҳ²�������Ƿ���ȷ
		if (val > num) {
			cout << "�´���" << endl;
		}
		else if (val < num) {
			cout << "��С��" << endl;
		}
		else {
			cout << "�¶���" << endl;
			break;//break��ѭ���У���������break����ѭ��
		}
		
		
	}


	
	//�¶� �˴�
	//�´� �����·��صڶ���
	system("pause");

	return 0;
}