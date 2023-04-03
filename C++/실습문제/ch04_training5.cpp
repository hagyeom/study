#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	srand((unsigned)time(0)); // 시작할 때마다, 다른 랜덤수를 발생시키기 위한 seed 설정
	int n = rand(); // 0에서 RAND_MAX(32767) 사이의 랜덤한 정수 발생
	// rand() 함수는 난수 생성 함수

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while(true){
		string input;
		getline(cin, input, '\n');
		if (input == "exit") // "exit"를 입력하면 종료
			break;
		// 랜덤하게 수정할 글자 선택
		int index = rand() % input.length(); /* rand() 함수와 '%'연산자를 사용하여
		0부터 입력받은 문자열의 길이 - 1까지의 랜덤한 정수 index를 생성 */
		char original_char = input[index]; /* index를 사용하여 input 문자열에서 랜덤하게 선택된 문자
		original_char를 가져옵니다.*/
		char new_char = original_char; // new_char 변수를 original_char와 같은 값으로 초기화
		while (new_char == original_char) { // new_char 변수와 original_char 변수가 다를 때까지 반복문을 실행
			new_char = 'a' + rand() % 26; /* rand() 함수와 % 연산자를 사용하여 알파벳 소문자 중 
			랜덤하게 선택된 문자를 new_char에 할당 */
		}
		// 선택할 글자 수정하기 
		input[index] = new_char;
		// 수정된 결과 출력하기
		cout << input << endl;
	}
	return 0;
}
