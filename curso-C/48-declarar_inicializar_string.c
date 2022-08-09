#include <stdio.h>

int main(void){
	//char palavra[] = {'B', 'r', 'a', 's', 'i', 'l'};
	//char palavra[7] = {"Brasil"};
	char palavra[] = "Brasil";

	// \0 = caractere nulo e vai no final de toda string
	// quando inicializa como char string[] = "aaaa", ele coloca \0 no final
	// informa que string acabou e printa até encontrar
	// por isso que coloca com tamanho 7, sendo \ não contado como caractere, mas sim 0

	printf("%s\n", palavra);
	return 0;
}
