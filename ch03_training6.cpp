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
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "10 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 10);
		cout << n << ' ';
	}
	cout << endl;
}