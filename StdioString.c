#include <stdio.h>

void main()
{
	char szBuffer[128] = { 0 }; // ���ڿ��� �����ϱ� ���ؼ� ����� ������ 128�� char�� �迭 szBuffer�� �����Ѵ�
	printf("Input your name: ");
	gets(szBuffer); // ����ڰ� Ű����� �Է��� ���ڿ��� �迭 szBuffer�� �����Ѵ�

	printf("Your name is ");
	puts(szBuffer); // �迭 szBuffer�� ����� ���ڿ��� ǥ�� ��� ��ġ(stdout)�� ����Ѵ�
}