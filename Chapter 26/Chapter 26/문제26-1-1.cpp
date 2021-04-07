#include <stdio.h>
#define PLUS(X, Y, Z) ((X)+(Y)+(Z))
#define MULTIPLY(X, Y, Z) ((X)*(Y)*(Z))

int main() {
	printf("%d \n", PLUS(3, 5, 6));
	printf("%d \n", MULTIPLY(3, 5, 6));

}
