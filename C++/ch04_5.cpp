/* 정수형 공간의 동적 할당 및 반환 */
#include <iostream>
using namespace std;

int main() {
	int* p;

	p = new int; // int 타입의 정수 공간 할당 
	if(!p){ // p가 NULL이면 메모리 할당 실패 
		cout << "메모리를 할당할 수 없습니다.";
		return 0;
	}

	*p = 5; // 할당받은 정수 공간에 5 기록
	int n = *p; // 할당받은 정수 공간에서 값 읽기, n = 5
	cout << "*p = " << *p << endl;
	cout << "n = " << n << endl;

	delete p; // 할당받은 정수 공간 반환
}
