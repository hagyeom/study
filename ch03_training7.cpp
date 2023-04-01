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
	} while (n % 2 == 1); // ¦�� ���� ���� �߻�
	return n;
}

int SelectableRandom::nextInRange(int x, int y) {
	srand((unsigned)time(0));
	int n;
	do {
		n = rand() % (y - x + 1) + x;
	} while (n % 2 == 0); // Ȧ�� ���� ���� �߻�
	return n;
}

int main() {
	SelectableRandom r;
	cout << "-- 0���� " << RAND_MAX << "������ ¦�� ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "9 ������ ���� Ȧ�� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}