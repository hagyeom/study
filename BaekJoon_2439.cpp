/* ���� 2439�� ���� : �� ��� 1 */
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n; // �Է°� n�� ����
	// i�� i�� ° ��, �� �� ��° �������� ���� 
	for (int i = 1; i <= n; i++) { // for ���� ����Ͽ� 1���� n���� �ݺ�
		for (int j = 1; j <= n - i; j++)  // ������ ���� : n - i
			cout << " ";
			for (int j = 0; j < i; j++)  // �� ��� : i
				cout << "*";
			cout << endl; // ����� ������ endl�� ����Ͽ� �ٹٲ�
	}
	return 0;
}