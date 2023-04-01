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
	int n, r;
	cout << "���� ���� >> ";
	cin >> n;
	Circle* pArray = new Circle[n];
	for (int i = 0; i < n; i++) {
		cout << "�� " << i + 1 << "�� ������ >> ";
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
	cout << "������ 100���� ū ���� " << count << "�� �Դϴ�" << endl;
}