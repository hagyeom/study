/* 생성자에서 다른 생성자 호출 연습(위임 생성자 만들기 연습) */
/* 타겟 생성자 : 객체 초기화를 전담하는 생성자 
 위임 생성자 : 객체 초기화를 다른 생성자에 위임하는 생성자 */
/* C++11 부터는 중복된 초기화 코드를 타겟 생성자로 몰고, 위임 생성자에서 
타겟 생성자를 호출할 수 있게 한다. */
#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle(); // 위임 생성자
	Circle(int r); // 타겟 생성자
	double getArea();
};

Circle::Circle():Circle(1){} // Circle(int r)의 생성자 호출

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut; // 매개 변수 없는 생성자 호출
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(30); // 매개 변수 있는 생성자 호출
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;
}
