#include <stdio.h>
#include <stdbool.h>

struct dicionario {
	char palavra[20];
	char definicao[50];
};

bool compararStrings(const char palavra1[], const char palavra2[]){
	int i = 0;
	while(palavra1[i] == palavra2[i]
	      && palavra1[i] != '\0' && palavra2[i] != '\0'){
		i++;
	}
	if (palavra1[i] == '\0' && palavra2[i] == '\0'){
		return true;
	} else {
		return false;
	}

}

int procurarStrings(const struct dicionario lingua[], const char palavra_procurada[],
		    const int numPalavrasDict) {

	bool compararStrings(const char palavra1[], const char palavra2[]);
	int i = 0;
	while (i < numPalavrasDict) {
		if (compararStrings(palavra_procurada, lingua[i].palavra)){
			return i;
		} else {
			i++;
		}
	}
	return -1;
}

int main(void){
	int procurarStrings(const struct dicionario lingua[], const char palavra_procurada[],
			    const int numPalavrasDict);
	const int NUMERODEFINICOES = 7;  // variavel constante com letras maiusculas; quantas palavras no dict
	char palavra[20] = {'\0'};  // todos valores da string = '\0'
	int resultadoPesquisa;

	const struct dicionario portugues[7] = {
		{"pao", "Comida de farinha"},
		{"queijo", "Derivado de leite"},
		{"mortadela", "Comida de carne"},
		{"cafe", "Vital e necessario"},
		{"leite", "Da vaca"},
		{"ferro", "Fe"},
		{"pizza", "Muito bom legal"}
	};

	printf("Digite uma palavra: ");
	scanf("%s", palavra);

	resultadoPesquisa = procurarStrings(portugues, palavra, NUMERODEFINICOES);
	if (resultadoPesquisa != -1){
		printf("%s\n", portugues[resultadoPesquisa].definicao);
	} else {
		printf("Palavra %s nao encontrada\n", palavra);
	}
	return 0;
}

