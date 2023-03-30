#include <stdio.h>

void main()
{
	int nData1 = 1234, nData2 = -4567;

	printf("%d\n", nData1);
	printf("%+d,%+d\n", nData1, nData2); // 기호를 붙여서 출력

	printf("%07d\n", nData1); // 전체 자리수는 7자리로 하되, 오른쪽으로 정렬하고, 왼쪽 빈칸은 0으로 채워 출력
	printf("%7d\n", nData1); // 전체 자리수는 7자리로 하되, 오른쪽으로 정렬하여 출력
	printf("%-7d\n", nData1); // 전체 자리수는 7자리로 하되, 왼족으로 정렬하여 출력
	/*
	실행결과
	1234
	+1234,-4567
	0001234
	   1234
	1234

	*/
}