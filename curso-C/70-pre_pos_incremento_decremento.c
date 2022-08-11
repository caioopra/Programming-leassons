#include <stdio.h>

int main(void){
	int x = 1;
	int y = 0;

	y = ++x; // (primeiro incrementa x e depois aumenta y)
	// y = x++	-> mesma coisa que  y = x; x++; -> incrementa depois
	printf("x = %i\n", x);
	printf("y = %i\n", y);
	return 0;
}
