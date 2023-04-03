/* 접근 지정자 */
#include <iostream>
using namespace std;

class PrivateAccessError {
private:
	int a;
	void f();
	PrivateAccessError();
public:
	int b;
	PrivateAccessError(int x);
	void g();
};

PrivateAccessError::PrivateAccessError() {
	a = 1; // (1)
	b = 1; // (2)
}

PrivateAccessError::PrivateAccessError(int x) {
	a = x; // (3)
	b = x; // (4)
}

void PrivateAccessError::f() {
	a = 5; // (5)
	b = 5; // (6)
}

void PrivateAccessError::g() {
	a = 6; // (7)
	b = 6; // (8)
}

int main() {
	// PrivateAccessError objA; 
	// (9) 생성자 PrivateAccessError()는 private이므로 main()에서 호출할 수 없다.
	PrivateAccessError objB(100); // (10)
	// objB.a = 10; 
	// (11) a는 PrivateAccessError 클래스의 private 멤버이므로 main()에서 접근할 수 없다.
	objB.b = 20; // (12)
	// objB.f(); 
	// (13) f()는 PrivateAccessError 클래스의 private 멤버이므로 main()에서 호출할 수 없다.
	objB.g(); // (14)
}
