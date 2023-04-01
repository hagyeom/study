#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar);
	int drinkEspresso(); // Ŀ�� 1, �� 1 �Һ�
	void show(); // ���� Ŀ�� �ӽ��� ���� ���
	int drinkAmericano(); // Ŀ�� 1, �� 2 �Һ�
	int drinkSugarCoffee(); // Ŀ�� 1, �� 2, ���� 1 �Һ�
	int fill(); // Ŀ�� 10, �� 10, ���� 10���� ä���
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
	this->coffee = coffee; this->water = water; this->sugar = sugar;
}

int CoffeeMachine::drinkEspresso() {
	coffee -= 1; water -= 1;
	return coffee, water;
}

void CoffeeMachine::show() {
	cout << "Ŀ�� �ӽ� ����, Ŀ��:" << coffee << " ��:" << water <<'\t'<< " ����:" << sugar << endl;
}

int CoffeeMachine::drinkAmericano() {
	coffee -= 1; water -= 2;
	return coffee, water;
}

int CoffeeMachine::drinkSugarCoffee() {
	coffee -= 1; water -= 2; sugar -= 1;
	return coffee, water, sugar;
}

int CoffeeMachine::fill() {
	coffee = 10; water = 10; sugar = 10;
	return coffee, water, sugar;
}

int main() {
	CoffeeMachine java(5, 10, 3);
	java.drinkEspresso();
	java.show();
	java.drinkAmericano();
	java.show();
	java.drinkSugarCoffee();
	java.show();
	java.fill();
	java.show();
}