/* n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램 */
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
