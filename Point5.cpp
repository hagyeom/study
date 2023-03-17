/* 멤버 변수 초기화와 위임 생성자 활용 */
/* 다음 Point 클래스의 멤버 x, y를 생성자 서두에 초깃값으로 초기화하고
위임 생성자를 이용하여 재작성 */
/* class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
};
Point::Point() { x = 0; y = 0; }
Point::Point(int a, int b) { x = a; y = b;}
*/
#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() : Point(0, 0) { } // Point(int a, int b) 생성자 호출. 위임 생성자

Point::Point(int a, int b) // 타겟 생성자
	: x(a), y(b) { } // 콜론(:) 이하 부분은 다음 줄에 써도 됨

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}