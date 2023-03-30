#include <iostream>
using namespace std;

class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};

int main() {
	Color screenColor(255, 0, 0); // �������� screeColor ��ü ����
	Color* p; // Color Ÿ���� ������ ���� p ����
	p = &screenColor; // p�� screenColor�� �ּҸ� �������� �ڵ� �ۼ�
	p->show(); // p�� show()�� �̿��Ͽ� screenColor �� ���
	Color colors[3]; // Color�� ������ �迭 colors ����. ���Ҵ� 3��
	p = colors; // p�� colors �迭�� ����Ű���� �ڵ� �ۼ�

	// p�� setColor()�� �̿��Ͽ� colors[0], colors[1], colors[2]��
	// ���� ����, �ʷ�, �Ķ����� �������� �ڵ� �ۼ�
	p->setColor(255, 0, 0);
	(p + 1)->setColor(0, 255, 0);
	(p + 2)->setColor(0, 0, 255);

	// p�� show()�� �̿��Ͽ� colors �迭�� ��� ��ü�� �� ���. for �� �̿�
	for (int i = 0; i < 3; i++) {
		(p + i)->show();
	}
	return 0;
}