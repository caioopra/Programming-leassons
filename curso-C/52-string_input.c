#include <stdio.h>

int main(void){
	char nome[20];
	char sobrenome[30];

	printf("Inisra seu nome e sobrenome: \n");
	scanf("%s%s", nome, sobrenome);

	printf("%s %s\n", nome, sobrenome);
	return 0;
}
