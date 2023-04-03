/* 백준 2438번 문제 : 별 찍기 1 */
#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) { // i : 세로
		for (int j = 0; j < i + 1; j++) { // j : 가로 
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
