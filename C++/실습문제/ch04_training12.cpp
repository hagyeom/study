#include <iostream>
#include <string>

using namespace std;

class Circle {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) {
		this->name = name; this->radius = radius;
	}
	double getArea() { return 3.14 * radius * radius; }
	string getName() { return name; }
};

class CircleManager {
	Circle* p; // Circle 배열에 대한 포인터
	int size; // 배열의 크기
public:
	// size 크기의 배열을 동적 생성. 사용자로부터 입력 완료
	CircleManager(int size) { p = new Circle[size]; this->size = size; }
	~CircleManager() { delete[] p; }
	Circle* getCircle() { return p; }
	// 사용자로부터 원의 이름을 입력받아 면적 출력
	void searchByName();
	// 사용자로부터 면적을 입력받아 면적보다 큰 원의 이름 출력
	void searchByArea();
};

void CircleManager::searchByName() {
	string find;
	cout << "검색하고자 하는 원의 이름 >> ";
	cin >> find;

	for (int i = 0; i < size; i++) {
		if (find == p[i].getName()) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}
void CircleManager::searchByArea() {
	int minArea;
	cout << "최소 면적을 정수로 입력하세요 >> ";
	cin >> minArea;
	cout << minArea << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > minArea) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
	cout << endl;
}

int main() {
	int numOfCircles;
	cout << "원의 개수 >> ";
	cin >> numOfCircles;

	CircleManager circles(numOfCircles);

	for (int i = 0; i < numOfCircles; i++) {
		cout << "원 " << i + 1 << "의 이름과 반지름 >> ";
		string name;
		int r;
		cin >> name >> r;
		circles.getCircle()[i].setCircle(name, r);
	}
	circles.searchByName();
	circles.searchByArea();

	return 0;
}
