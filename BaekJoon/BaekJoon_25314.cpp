/* 백준 25314번 문제 */
#include <iostream>
using namespace std;

int main() { // 4바이트 -> long int / 8바이트 -> long long int / 16바이트 -> long long long long int
	int n;
	cin >> n;
	for (int i = 0; i < n / 4; i++) { // 4 * n 바이트 -> long * (n) int (n > 0) 이므로  
		cout << "long "; // 입력된 n을 4로 나눈 몫 만큼 "long" 출력
		if (i == n / 4 - 1)
			cout << "int"; // 마지막에 int 출력
	}
}
