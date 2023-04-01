#include <iostream>
using namespace std;

class Circle {
	int radius; // 원의 반지름 값
public:
	void setRadius(int radius); // 반지름을 설정한다.
	double getArea(); // 면적을 리턴한다.
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int r; // 반지름
	Circle* pArray = new Circle[3];
	for (int i = 0; i < 3; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r; // 반지름 입력
		pArray[i].setRadius(r); // 각 Circle 객체를 반지름으로 초기화
	}
	int count = 0; // 카운트 변수
	Circle* p = pArray; // 포인터 p에 배열의 주소값 설정
	for (int i = 0; i < 3; i++) {
		if (p->getArea() > 100)
			count++;
		p++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개입니다" << endl;
}