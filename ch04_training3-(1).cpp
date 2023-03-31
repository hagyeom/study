/* 3-(1) string 클래스의 멤버 at()나 []를 이용하여 작성 */
#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int count = 0;
	cout << "문자열 입력>> ";
	getline(cin, s, '\n'); 
	int len = s.length();
	for (int i = 0; i <len; i++) {
		if (s.at(i) == 'a') // if (s[i] == 'a')로도 작성 가능
			count++;
	}
	cout << "문자 a는 " << count << "개 있습니다." << endl;
}
