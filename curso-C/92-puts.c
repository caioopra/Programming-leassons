#include <stdio.h>
#include <stdlib.h>

int main(void){
	puts("Teste"); // vetor de caracteres ou string literal ("string") e coloca no stdout
	// automaticamente pula linha
	puts("Teste 2");

	char x[] = "Palavra legal puts";
	puts(x);

	return 0;
}
