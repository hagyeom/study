#include <iostream>
using namespace std;

class Container { // �� �ϳ��� ��Ÿ���� Ŭ����
	int size; // ���� ���� ��, �ִ� ���差�� 10
public:
	Container() { size = 10; }
	void fill() { size = 10; } // �ִ뷮(10)���� ä���
	void consume() { size -= 1; }// 1 ��ŭ �Ҹ��ϱ�
	int getSize() { return size; } // ���� ũ�� ����
};

class CoffeeVendingMachine{ // Ŀ�� ���Ǳ⸦ ǥ���ϴ� Ŭ����
	Container tong[3]; // tong[0]�� Ŀ��, tong[1]�� ��, tong[2]�� �������� ��Ÿ��
	void fill(); // 3���� ���� ��� 10���� ä��
	void selectEspreso(); // ���������Ҹ� ������ ���, Ŀ�� 1, �� 1 �Ҹ�
	void selectAmericano(); // �Ƹ޸�ī�븦 ������ ���, Ŀ�� 1, �� 2 �Ҹ�
	void selectSugarCoffee(); // ����Ŀ�Ǹ� ������ ���, Ŀ�� 1, �� 2 �Ҹ�, ���� 1 �Ҹ�
	void show(); // ���� Ŀ��, ��, ������ �ܷ� ���
public:
	void run(); // Ŀ�� ���Ǳ� �۵�
};

void CoffeeVendingMachine::fill() {
	for (int i = 0; i < 3; i++)
		tong[i].fill();
	show();
}

void CoffeeVendingMachine::selectEspreso() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 1) {
		tong[0].consume();
		tong[1].consume();
		cout << "���������� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "�Ƹ޸�ī�� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�." << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "����Ŀ�� �弼��" << endl;
	}
	else {
		cout << "���ᰡ �����մϴ�" << endl;
	}
}

void CoffeeVendingMachine::show() {
	cout << "Ŀ�� " << tong[0].getSize() << ", �� " << tong[1].getSize() << ", ���� " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	cout << "***** Ŀ�����Ǳ⸦ �۵��մϴ�. *****" << endl;

	while (true) {
		int n;
		cout << "�޴��� �����ּ���(1:����������, 2:�Ƹ޸�ī��, 3:����Ŀ��, 4:�ܷ�����, 5:ä���)>> ";
		cin >> n; // ��ȣ �Է�
		cout << endl;
		switch (n)
		{
		case 1: // ���������� ����
			selectEspreso();
			break;
		case 2: // �Ƹ޸�ī�� ����
			selectAmericano();
			break;
		case 3: // ����Ŀ�� ����
			selectSugarCoffee();
			break;
		case 4: // �ܷ� ����
			show();
			break;
		case 5: // ä���
			fill();
		default:
			break;
		}
	}
}

int main() {
	CoffeeVendingMachine coffeeVendingMachine;
	coffeeVendingMachine.run();
	return 0;
}