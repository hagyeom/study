#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class SelectableRandom {
	int n;
public:
	SelectableRandom();
	int next();
	int nextInRange(int x, int y);
};

SelectableRandom::SelectableRandom() {

}

int SelectableRandom::next() {
	srand((unsigned)time(0));
	int n;
	do {
		n = rand();
	} while (n % 2 == 1); // 짝수 랜덤 정수 발생
	return n;
}

int SelectableRandom::nextInRange(int x, int y) {
	srand((unsigned)time(0));
	int n;
	do {
		n = rand() % (y - x + 1) + x;
	} while (n % 2 == 0); // 홀수 랜덤 정수 발생
	return n;
}

int main() {
	SelectableRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 짝수 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "9 까지의 랜덤 홀수 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}
