#include <iostream>
using namespace std;

// Adder.h
class Adder { // 덧셈 모듈 클래스 
	int op1, op2;
public:
	Adder(int a, int b);
	int process();
};

// Adder.cpp
Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
}

int Adder::process() {
	return op1 + op2;
}

// Calculator.h
class Calculator { // 계산기 클래스 
public:
	void run();
};

// Calculator.cpp 
void Calculator::run() {
	cout << "두 개의 수를 입력하세요>>";
	int a, b;
	cin >> a >> b; // 정수 두 개 입력
	Adder adder(a, b); // 덧셈기 생성
	cout << adder.process(); // 덧셈 계산
}

// main.cpp
int main() {
	Calculator calc; // calc 객체 생성
	calc.run(); // 계산기 시작
}

/*
실행 결과

두 개의 수를 입력하세요>>5 -20
-15
*/