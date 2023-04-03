/* 3-(2) string 클래스의 find() 멤버 함수를 이용하여 작성 */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	cout << "문자열 입력>> ";
	getline(cin, text, '\n');

	int index = 0;
	while (true) {
		int aIndex = text.find('a', index);
		if (aIndex == -1)
			break;
		index++;
	}
	cout << "문자 a는 " << index << "개 있습니다." << endl;
}
