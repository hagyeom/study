/* Rectangle Ŭ���� ����� */
/* Rectangle Ŭ������ width�� height�� �� ��� ������ 3���� ������,
�׸��� isSquare() �Լ��� ������. */
/*
int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if(rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if(rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if(rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}
*/
#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height; // �ʺ�� ����
	Rectangle(); // ������
	Rectangle(int w, int h); // ������
	Rectangle(int length); // ������
	bool isSquare();
};

Rectangle::Rectangle() { // Rectangle::Rectangle() : Rectangle(1) {}�� �ص� ��
	width = height = 1;
}

Rectangle::Rectangle(int w, int h) {
	width = w; height = h;
}

Rectangle::Rectangle(int length) { // Rectangle::Rectangle(int length) : Rectangle(length) {}�� �ص� ��
	width = height = length;
}

bool Rectangle::isSquare() { // ���簢���̸� true�� �����ϴ� ��� �Լ�
	if (width == height) return true;
	else return false;
}

int main() { // 3���� �����ڰ� �ʿ���
	Rectangle rect1; // Rectangle() ȣ��
	Rectangle rect2(3, 5); // Rectangle(int w, int h) ȣ��
	Rectangle rect3(3); // Rectangle(int length) ȣ��

	if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
	if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
	if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
	// ���� ���
	/*
	rect1�� ���簢���̴�.
	rect3�� ���簢���̴�.
	*/
}