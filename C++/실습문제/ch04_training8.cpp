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
	int n, r;
	cout << "원의 개수 >> ";
	cin >> n;
	Circle* pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> r;
		pArray[i].setRadius(r);
	}
	int count = 0;
	Circle* p = pArray;
	for (int i = 0; i < n; i++) {
		if (p->getArea() > 100)
			count++;
		p++;
	}
	cout << "면적이 100보다 큰 원은 " << count << "개 입니다" << endl;
}
