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
	} while (n % 2 == 1); // Â¦¼ö ·£´ý Á¤¼ö ¹ß»ý
	return n;
}

int SelectableRandom::nextInRange(int x, int y) {
	srand((unsigned)time(0));
	int n;
	do {
		n = rand() % (y - x + 1) + x;
	} while (n % 2 == 0); // È¦¼ö ·£´ý Á¤¼ö ¹ß»ý
	return n;
}

int main() {
	SelectableRandom r;
	cout << "-- 0¿¡¼­ " << RAND_MAX << "±îÁöÀÇ Â¦¼ö ·£´ý Á¤¼ö 10 °³--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2¿¡¼­ " << "9 ±îÁöÀÇ ·£´ý È¦¼ö Á¤¼ö 10 °³ --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 9);
		cout << n << ' ';
	}
	cout << endl;
}