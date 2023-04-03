/* 백준 1552번 문제 */
/* 빠른 A + B */
#include <cstdio>

int main() {
	int t;
	scanf_s("%d",&t);

	while (t--) {
		int a, b;
		scanf_s("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}
