/* Rectangle 클래스 만들기 */
/* Rectangle 클래스는 width와 height의 두 멤버 변수와 3개의 생성자,
그리고 isSquare() 함수를 가진다. */
/*
int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if(rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if(rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
}
*/
#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height; // 너비와 높이
	Rectangle(); // 생성자
	Rectangle(int w, int h); // 생성자
	Rectangle(int length); // 생성자
	bool isSquare();
};

Rectangle::Rectangle() { // Rectangle::Rectangle() : Rectangle(1) {}로 해도 됨
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) { // Rectangle::Rectangle(int length) : Rectangle(length) {}로 해도 됨
	width = height = length;
}

bool Rectangle::isSquare() { // 정사각형이면 true를 리턴하는 멤버 함수
	if (width == height) return true;
	else return false;
}

int main() { // 3개의 생성자가 필요함
	Rectangle rect1; // Rectangle() 호출
	Rectangle rect2(3, 5); // Rectangle(int w, int h) 호출
	Rectangle rect3(3); // Rectangle(int length) 호출

	if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다." << endl;
	// 실행 결과
	/*
	rect1은 정사각형이다.
	rect3는 정사각형이다.
	*/
}