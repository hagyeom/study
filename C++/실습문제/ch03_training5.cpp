#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Random {
	int n;
public:
	Random();
	int next(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수
	int nextInRange(int x, int y); // x에서 y 사이의 랜덤한 정수
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
	int n = rand() % (y - x + 1) + x; /* rand() % n은 0에서 n - 1 사이의 값을 반환 
	 (y - x + 1)은 x와 y 사이의 정수 개수. 즉, y - x + 1을 하면 x부터 y까지의 정수 개수를 구할 수 있음
	  rand() % (y - x + 1)은 x부터 y 사이의 정수 개수에서 1을 뺀 값, 즉 0에서 y - x 사이의 값을 반환
	  여기에 x를 더하면 최종적으로 x부터 y 사이의 랜덤한 정수를 반환
	  x가 2이고 y가 4일 경우, (y - x + 1)은 3이 되고, rand() % (y - x + 1)은 0에서 2 사이의 값을 반환
	  x인 2를 더하면 최종적으로 2에서 4 사이의 랜덤한 정수를 얻을 수 있음
	*/ 
	return n;
}

int main() {
	Random r;
	cout << "-- 0에서 " << RAND_MAX << "까지의 랜덤 정수 10 개--" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.next();
		cout << n << ' ';
	}
	cout << endl << endl << "-- 2에서 " << "4 까지의 랜덤 정수 10 개 --" << endl;
	for (int i = 0; i < 10; i++) {
		int n = r.nextInRange(2, 4);
		cout << n << ' ';
	}
	cout << endl;
}
