#include <stdio.h>
#include <stdlib.h>

int main(void){
	// funcao insegura!
	char x[10];
	char y[10];

	// le do stdin -> permite ler qualquer quantidade e causa problemas com a memoria
	gets(x);
	printf("%s", x);

	// em C11 nao existe a funcao gets -> fgets ou scanf podem ser usadas

	return 0;
}
