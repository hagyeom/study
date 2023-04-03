#include <stdio.h>

void main()
{
	__int64 nData = 0xFFFFFFFF;

	printf("%d\n", nData);
	printf("%u\n", nData);
	printf("%I64u\n", nData + 10);
	/*
	실행 결과
	-1
	4294967295
	4294967305
	*/
}
