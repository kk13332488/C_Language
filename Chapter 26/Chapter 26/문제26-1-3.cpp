#include <stdio.h>
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
	int num1, num2;
	printf("�� ���� ���� �Է�");
	scanf_s("%d, %d", &num1, &num2);
	printf("%d", MAX(num1, num2));
	return 0;
}