/* n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷� */
#include <iostream>
using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int k, sum = 0;
	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << sum;
	return 0;
}