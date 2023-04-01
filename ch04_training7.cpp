#include <iostream>
using namespace std;

class Circle {
	int radius; // ���� ������ ��
public:
	void setRadius(int radius); // �������� �����Ѵ�.
	double getArea(); // ������ �����Ѵ�.
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	int r; // ������
	Circle* pArray = new Circle[3];
	for (int i = 0; i < 3; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
		cin >> r; // ������ �Է�
		pArray[i].setRadius(r); // �� Circle ��ü�� ���������� �ʱ�ȭ
	}
	int count = 0; // ī��Ʈ ����
	Circle* p = pArray; // ������ p�� �迭�� �ּҰ� ����
	for (int i = 0; i < 3; i++) {
		if (p->getArea() > 100)
			count++;
		p++;
	}
	cout << "������ 100���� ū ���� " << count << "���Դϴ�" << endl;
}