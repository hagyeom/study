/* ���ڿ� ó�� ���� - ���� ���ڿ��� �Է¹޾� ���� ���� */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���." << endl;
	getline(cin, s, '\n'); // ���ڿ� �Է�
	int sum = 0;
	int startIndex = 0; // ���ڿ� ���� �˻��� ���� �ε���
	while (true) {
		int fIndex = s.find('+', startIndex); // '+' ���� �˻�
		if(fIndex == -1){ // '+' ���� �߰��� �� ���� 
			string part = s.substr(startIndex);
			if (part == "") break; // "2+3+", �� +�� ������ ���
			cout << part << endl;
			sum += stoi(part); // ���ڿ��� ���� ��ȯ�Ͽ� ���ϱ�
			break;
		}
		int count = fIndex - startIndex; // ���꽺Ʈ������ �ڸ� ���� ����
		string part = s.substr(startIndex, count); // startIndex���� count ���� ���ڷ� ���꽺Ʈ�� �����

		cout << part << endl;
		sum += stoi(part); // ���ڿ��� ���� ��ȯ�Ͽ� ���ϱ�
		startIndex = fIndex + 1; // �˻��� ������ �ε��� ������Ŵ
	}
	cout << "���ڵ��� ���� " << sum;
}
/*
7+23+5+100+25�� ���� ���� ���ڿ��� �Է��ϼ���.
66+2+8+55+100
66
2
8
55
100
���ڵ��� ���� 231
*/