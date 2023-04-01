#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	int n;
public:
	Random();
	int next(); // 0���� RAND_MAX(32767) ������ ������ ����
	int nextInRange(int x, int y); // x���� y ������ ������ ����
};

Random::Random() {

}

int Random::next() {
	srand((unsigned)time(0));
	int n = rand();
	return n;
}

int Random::nextInRange(int x, int y) {
	srand((unsigned)time(0));
	int n = rand() % (y - x + 1) + x; /* rand() % n�� 0���� n - 1 ������ ���� ��ȯ 
	 (y - x + 1)�� x�� y ������ ���� ����. ��, y - x + 1�� �ϸ� x���� y������ ���� ������ ���� �� ����
	  rand() % (y - x + 1)�� x���� y ������ ���� �������� 1�� �� ��, �� 0���� y - x ������ ���� ��ȯ
	  ���⿡ x�� ���ϸ� ���������� x���� y ������ ������ ������ ��ȯ
	  x�� 2�̰� y�� 4�� ���, (y - x + 1)�� 3�� �ǰ�, rand() % (y - x + 1)�� 0���� 2 ������ ���� ��ȯ
	  x�� 2�� ���ϸ� ���������� 2���� 4 ������ ������ ������ ���� �� ����
	*/ 
	return n;
}

int main() {
	Random r;
	cout << "-- 0���� " << RAND_MAX << "������ ���� ���� 10 ��--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2���� " << "4 ������ ���� ���� 10 �� --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}