/* ���ڿ� find �� replace */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�." << endl;
	getline(cin, s, '&'); // ���ڿ� �Է�
	cin.ignore(); // '&' �ڿ� ���� ���� <Enter> Ű�� �����ϱ� ���� �ڵ�

	string f, r;
	cout << endl << "find: ";
	getline(cin, f, '\n'); // �˻��� ���ڿ� �Է�
	cout << "replace: ";
	getline(cin, r, '\n'); // ��ġ�� ���ڿ� �Է�

	int startIndex = 0;
	while (true) {
		int fIndex = s.find(f, startIndex); // startIndex���� ���ڿ� f �˻�
		if (fIndex == -1)
			break; // ���ڿ� s�� ������ �����Ͽ���
		s.replace(fIndex, f.length(), r); // fIndex���� ���ڿ� f�� ���̸�ŭ ���ڿ� r�� ����
		startIndex = fIndex + r.length();
	}
	cout << s << endl;
}
/*
���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�.
It's now or over, come hold me tight. Kiss me my darling, be mine tonight Tomorrow will be too late. It's now or never,
my love won't wait&

find: now
replace: Right Now
It's Right Now or over, come hold me tight. Kiss me my darling, be mine tonight Tomorrow will be too late. It's Right No
w or never, my love won't wait

*/