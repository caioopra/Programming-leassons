#include <stdio.h>
#include <stdlib.h>

int main(void){
	char x[100];

	FILE * file = fopen("89-texto.txt", "r");

	int i = 0;
	while((x[i] = fgetc(file)) != EOF) { // End Of File (enquato nao atinge o final do arquivo)
		i++;
	}

	x[i] = '\0';
	printf("%s", x);

	return 0;
}
