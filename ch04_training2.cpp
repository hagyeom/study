#include <iostream>
using namespace std;

int main() {
	cout << "정수 5개 입력>>";
	int* p = new int[5];
	for (int i = 0; i < 5; i++) {
		cin >> p[i]; 
	}

	double sum = 0;
	for (int i = 0; i < 5; i++)
		sum += p[i];
	cout << "평균 " << sum / 5 << endl;

	delete [] p;
}
