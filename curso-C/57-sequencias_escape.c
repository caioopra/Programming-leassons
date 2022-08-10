#include <stdio.h>

int main(void){
	printf("Pular linha \n");  // move cursor para prox linha

	// \0 = caracter final de string

	printf("Alarme sonoro\a");

	// \b move cursor um caracter para esquerda ("apaga")
	// \t tab na string
	// \r volta o cursor para inicio da linha
	// \" \" escreve entre aspas
	// \' \' escreve entre apostrofes
	printf("Frase \"entre aspas\"");
	return 0;
}
