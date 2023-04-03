#include <iostream>
using namespace std;

class Container { // 통 하나를 나타내는 클래스
	int size; // 현재 저장 량, 최대 저장량은 10
public:
	Container() { size = 10; }
	void fill() { size = 10; } // 최대량(10)으로 채우기
	void consume() { size -= 1; }// 1 만큼 소모하기
	int getSize() { return size; } // 현재 크기 리턴
};

class CoffeeVendingMachine{ // 커피 자판기를 표현하는 클래스
	Container tong[3]; // tong[0]은 커피, tong[1]은 물, tong[2]는 설탕통을 나타냄
	void fill(); // 3개의 통을 모두 10으로 채움
	void selectEspreso(); // 에소프레소를 선택한 경우, 커피 1, 물 1 소모
	void selectAmericano(); // 아메리카노를 선택한 경우, 커피 1, 물 2 소모
	void selectSugarCoffee(); // 설탕커피를 선택한 경우, 커피 1, 물 2 소모, 설탕 1 소모
	void show(); // 현재 커피, 물, 설탕의 잔량 출력
public:
	void run(); // 커피 자판기 작동
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
		cout << "에소프레소 드세요" << endl;
	}
	else {
		cout << "원료가 부족합니다." << endl;
	}
}

void CoffeeVendingMachine::selectAmericano() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		cout << "아메리카노 드세요" << endl;
	}
	else {
		cout << "원료가 부족합니다." << endl;
	}
}

void CoffeeVendingMachine::selectSugarCoffee() {
	if (tong[0].getSize() >= 1 && tong[1].getSize() >= 2 && tong[2].getSize() >= 1) {
		tong[0].consume();
		tong[1].consume();
		tong[1].consume();
		tong[2].consume();
		cout << "설탕커피 드세요" << endl;
	}
	else {
		cout << "원료가 부족합니다" << endl;
	}
}

void CoffeeVendingMachine::show() {
	cout << "커피 " << tong[0].getSize() << ", 물 " << tong[1].getSize() << ", 설탕 " << tong[2].getSize() << endl;
}

void CoffeeVendingMachine::run() {
	cout << "***** 커피자판기를 작동합니다. *****" << endl;

	while (true) {
		int n;
		cout << "메뉴를 눌러주세요(1:에소프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>> ";
		cin >> n; // 번호 입력
		cout << endl;
		switch (n)
		{
		case 1: // 에소프레소 선택
			selectEspreso();
			break;
		case 2: // 아메리카노 선택
			selectAmericano();
			break;
		case 3: // 설탕커피 선택
			selectSugarCoffee();
			break;
		case 4: // 잔량 보기
			show();
			break;
		case 5: // 채우기
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
