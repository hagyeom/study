#include <stdio.h>

void main()
{
	float fData = 123.456f;

	printf("%f\n", fData);
	printf("%.1f\n", fData);
	printf("%.2f\n", fData);
	printf("%.3f\n\n", fData);

	printf("%e\n", fData);
	printf("%g\n", fData);
	/*
	실행 결과

	123.456001
	123.5
	123.46
	123.456

	1.234560e+02
	123.456

	*/
}