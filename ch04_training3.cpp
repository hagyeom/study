/* 3-(1) string Ŭ������ ��� at()�� []�� �̿��Ͽ� �ۼ� */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;
	cout << "���ڿ� �Է�>> ";
	getline(cin, s, '\n'); 
	int len = s.length();
	for (int i = 0; i <len; i++) {
		if (s.at(i) == 'a') // if (s[i] == 'a')�ε� �ۼ� ����
			count++;
	}
	cout << "���� a�� " << count << "�� �ֽ��ϴ�." << endl;
}