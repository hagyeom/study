/* ���� 2438�� ���� : �� ��� 1 */
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) { // i : ����
		for (int j = 0; j < i + 1; j++) { // j : ���� 
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}