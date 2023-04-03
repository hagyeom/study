#include <iostream>
using namespace std;

class CoffeeMachine {
	int coffee, water, sugar;
public:
	CoffeeMachine(int coffee, int water, int sugar);
	int drinkEspresso(); // 커피 1, 물 1 소비
	void show(); // 현재 커피 머신의 상태 출력
	int drinkAmericano(); // 커피 1, 물 2 소비
	int drinkSugarCoffee(); // 커피 1, 물 2, 설탕 1 소비
	int fill(); // 커피 10, 물 10, 설탕 10으로 채우기
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar) {
	this->coffee = coffee; this->water = water; this->sugar = sugar;
}

int CoffeeMachine::drinkEspresso() {
	coffee -= 1; water -= 1;
	return coffee, water;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피:" << coffee << " 물:" << water <<'\t'<< " 설탕:" << sugar << endl;
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
