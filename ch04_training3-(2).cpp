/* 3-(2) string Ŭ������ find() ��� �Լ��� �̿��Ͽ� �ۼ� */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	cout << "���ڿ� �Է�>> ";
	getline(cin, text, '\n');

	int index = 0;
	while (true) {
		int aIndex = text.find('a', index);
		if (aIndex == -1)
			break;
		index++;
	}
	cout << "���� a�� " << index << "�� �ֽ��ϴ�." << endl;
}