#include <stdio.h>

void main()
{
	char* pszData = "Test string!";

	printf("%s\n", pszData); // pszData ������ ����� �ּҸ� �ٰŷ� ���ڿ� ���
	printf("%p\n", pszData); // pszData ������ ����� �ּҸ� �ּ� �������� ���
	printf("%p\n", &pszData); // &�� �ּ� �������̸�, &pszData�� pszData��� �̸��� ������ �ּҰ� ��.
	// ���� �ּ� �������� ��µǴ� ���� pszData��� �̸��� �޸� �ּ��̴�.
	/*
	������
	Test string!
	00007FF758E09CA8
	00000073808FFA98
	*/
}