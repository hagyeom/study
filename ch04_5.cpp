/* ������ ������ ���� �Ҵ� �� ��ȯ */
#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int; // int Ÿ���� ���� ���� �Ҵ� 
	if(!p){ // p�� NULL�̸� �޸� �Ҵ� ���� 
		cout << "�޸𸮸� �Ҵ��� �� �����ϴ�.";
		return 0;
	}

	*p = 5; // �Ҵ���� ���� ������ 5 ���
	int n = *p; // �Ҵ���� ���� �������� �� �б�, n = 5
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; // �Ҵ���� ���� ���� ��ȯ
}