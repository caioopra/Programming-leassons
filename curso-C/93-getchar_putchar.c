#include <stdio.h>
#include <stdlib.h>

int main(void){
	// getchar obtem proximo caracter disponivel no buffer de entrada
	char x[10];

	//x[0] = getchar();
	//printf("%c", x[0]);

	int i = 0;
	while((x[i] = getchar()) != '\n' && i < 8) { // ultima posicao (9) precisa ser para \0
		i++;
	}
	x[++i] = '\0';
	printf("%s", x);

	return 0;
}
