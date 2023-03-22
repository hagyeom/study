/* 백준 2439번 문제 : 별 찍기 2 */
#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n; // 입력값 n을 받음
	// i는 i번 째 줄, 즉 몇 번째 줄인지를 말함 
	for (int i = 1; i <= n; i++) { // for 문을 사용하여 1부터 n까지 반복
		for (int j = 1; j <= n - i; j++)  // 공백의 개수 : n - i
			cout << " ";
			for (int j = 0; j < i; j++)  // 별 출력 : i
				cout << "*";
			cout << endl; // 출력할 때마다 endl을 사용하여 줄바꿈
	}
	return 0;
}
