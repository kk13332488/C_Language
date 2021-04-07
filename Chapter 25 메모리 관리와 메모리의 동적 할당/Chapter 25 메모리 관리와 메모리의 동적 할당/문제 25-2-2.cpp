#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int main() {
	int ptr_num = 5;
	int* ptr = (int*)malloc(sizeof(int) * 5);

	int cnt = 0;
	while (1) {
		cnt += 1;
		if ((cnt-5) % 3 == 0) {
			ptr = (int*)realloc(ptr, sizeof(int)* ptr_num + 3);
			ptr_num += 3;
		}
		printf("Write down a number:");
		scanf("%d", ptr[cnt]);

		if (ptr[cnt] == -1)
			break;
	}
	
}