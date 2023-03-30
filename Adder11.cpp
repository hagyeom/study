#include <iostream>
using namespace std;

// Adder.h
class Adder { // ���� ��� Ŭ���� 
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
class Calculator { // ���� Ŭ���� 
public:
	void run();
};

// Calculator.cpp 
void Calculator::run() {
	cout << "�� ���� ���� �Է��ϼ���>>";
	int a, b;
	cin >> a >> b; // ���� �� �� �Է�
	Adder adder(a, b); // ������ ����
	cout << adder.process(); // ���� ���
}

// main.cpp
int main() {
	Calculator calc; // calc ��ü ����
	calc.run(); // ���� ����
}

/*
���� ���

�� ���� ���� �Է��ϼ���>>5 -20
-15
*/