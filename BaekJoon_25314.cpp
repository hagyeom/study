/* ���� 25314�� ���� */
#include <iostream>
using namespace std;

int main() { // 4����Ʈ -> long int / 8����Ʈ -> long long int / 16����Ʈ -> long long long long int
	int n;
	cin >> n;
	for (int i = 0; i < n / 4; i++) { // 4 * n ����Ʈ -> long * (n) int (n > 0) �̹Ƿ�  
		cout << "long "; // �Էµ� n�� 4�� ���� �� ��ŭ "long" ���
		if (i == n / 4 - 1)
			cout << "int"; // �������� int ���
	}
}