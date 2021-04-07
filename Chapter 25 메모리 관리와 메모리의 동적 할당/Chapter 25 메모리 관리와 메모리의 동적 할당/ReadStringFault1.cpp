#include <stdio.h>
#include <stdlib.h>

char* ReadUserName(void) {
	char name[30];
	printf("What's your name?");
	gets_s(name, sizeof(char) * 30);
	return name;
}

int main(void)
{
	char* name1;
	char* name2;
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);
	return 0;
}

