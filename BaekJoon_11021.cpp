/* 백준 11021번 문제 */
#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		int a, b;
		cin >> a >> b;
		cout << "Case # " << i << " : " << a + b << endl;
	}

	return 0;
}