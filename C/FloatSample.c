/* 부동 소수점 오차 */
/* float형의 경우 소수점 이하 7번째 자리부터
값은 잘못된 값 */
#include <stdio.h>

void main()
{
	float fResult = 0.0f;
	int i = 0;

	for (i = 0; i < 20; ++i)
		fResult += 0.1f;
	printf("%.10f\n", fResult);

	for (i = 0; i < 30; ++i)
		fResult += 0.1f;
	printf("%.10f\n", fResult);
}
