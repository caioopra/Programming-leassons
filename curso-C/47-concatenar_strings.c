#include <stdio.h>

int main(void){
	void concatenarStrings(char string1[], int size1, char string2[], int size2, char stringResult[]);

	char palavra1[] = {'p', 'a', 'o', ' '};
	char palavra2[] = {'q', 'u', 'e', 'i', 'j', 'o'};
	char novaPalavra[10];

	concatenarStrings(palavra1, 4, palavra2, 6, novaPalavra);

	for (int i = 0; i < 10; i++){
		printf("%c", novaPalavra[i]);
	}
	printf("\n");
	return 0;
}

void concatenarStrings(char string1[], int size1, char string2[], int size2, char stringResult[]){
	for (int i = 0; i < size1; i++) {
		stringResult[i] = string1[i];
	}

	for (int j = 0; j < size2; j++){
		stringResult[size1 + j] = string2[j];
	}
}
