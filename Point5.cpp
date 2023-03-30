/* ��� ���� �ʱ�ȭ�� ���� ������ Ȱ�� */
/* ���� Point Ŭ������ ��� x, y�� ������ ���ο� �ʱ갪���� �ʱ�ȭ�ϰ�
���� �����ڸ� �̿��Ͽ� ���ۼ� */
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

Point::Point() : Point(0, 0) { } // Point(int a, int b) ������ ȣ��. ���� ������

Point::Point(int a, int b) // Ÿ�� ������
	: x(a), y(b) { } // �ݷ�(:) ���� �κ��� ���� �ٿ� �ᵵ ��

int main() {
	Point origin;
	Point target(10, 20);
	origin.show();
	target.show();
}