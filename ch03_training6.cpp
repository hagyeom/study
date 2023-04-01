#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class EvenRandom {
	int n;
public:
	EvenRandom();
	int next();
	int nextInRange(int x, int y);
};

EvenRandom::EvenRandom() {
	srand((unsigned)time(0));

}

int EvenRandom::next() {
	srand((unsigned)time(0));
	int n;
	do {
		n = rand();
	} while (n % 2 == 1);
	return n;
}

int EvenRandom::nextInRange(int x, int y) {
	srand((unsigned)time(0));
	int n;
	do {
		n = rand() % (y - x + 1) + x;
	} while (n % 2 == 1);
	return n;
}

int main() {
	EvenRandom r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "10 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}