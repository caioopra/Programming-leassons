#include <stdio.h>

int main(void){
	short x = 32768;  // overflow 32768
	short y = -32768; // undeflow -32769
	printf("%i, %i", x, y);
	//printf("%i\n", x);
	//printf("%i\n", y);

	return 0;
}
