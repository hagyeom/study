/* Adder11.cpp 파일에서 분리 */
#include "Adder.h"

Adder::Adder(int a, int b) {
	op1 = a; op2 = b;
}

int Adder::process() {
	return op1 + op2;
}