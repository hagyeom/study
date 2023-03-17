#include <stdio.h>

void main()
{
	char* pszData = "Test string!";

	printf("%s\n", pszData); // pszData 변수에 저장된 주소를 근거로 문자열 출력
	printf("%p\n", pszData); // pszData 변수에 저장된 주소를 주소 형식으로 출력
	printf("%p\n", &pszData); // &는 주소 연산자이며, &pszData는 pszData라는 이름의 변수의 주소가 됨.
	// 따라서 주소 형식으로 출력되는 것은 pszData라는 이름의 메모리 주소이다.
	/*
	실행결과
	Test string!
	00007FF758E09CA8
	00000073808FFA98
	*/
}