/* ���ڿ��� �Է� �ް� ȸ����Ű�� */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�.(�ѱ� �ȵ�) " << endl;
	getline(cin, s, '\n'); // ���ڿ� �Է�
	int len = s.length(); // ���ڿ��� ����

	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 1); // �� ���� ���� 1���� ���ڿ��� �и�
		string sub = s.substr(1, len - 1); // ������ ���ڵ��� ���ڿ��� �и�
		s = sub + first; // �� ���ڿ��� �����Ͽ� ���ο� ���ڿ��� ����
		cout << s << endl;
	}
}
/*
�Ʒ��� ���ڿ��� �Է��ϼ���. �� ĭ�� �־ �˴ϴ�.(�ѱ� �ȵ�)
I love you
 love youI
love youI
ove youI l
ve youI lo
e youI lov
 youI love
youI love
ouI love y
uI love yo
I love you
*/