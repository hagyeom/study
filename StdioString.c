#include <stdio.h>

void main()
{
	char szBuffer[128] = { 0 }; // 문자열을 저장하기 위해서 요소의 개수가 128인 char형 배열 szBuffer를 선언한다
	printf("Input your name: ");
	gets(szBuffer); // 사용자가 키보드로 입력한 문자열을 배열 szBuffer에 저장한다

	printf("Your name is ");
	puts(szBuffer); // 배열 szBuffer에 저장된 문자열을 표준 출력 장치(stdout)에 출력한다
}