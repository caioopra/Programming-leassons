#include <stdio.h>

int main(void){
	struct horario
	{
		int horas;
		int minutos;
		int segundos;
	} teste = {10, 20, 30};

	struct horario agora;
	agora.horas = 21;
	agora.minutos =  17;
	agora.segundos = 35;

	//teste.horas = 10;
	//teste.minutos = 20;
	//teste.segundos = 30;

	//struct horario teste2 = {.segundos = 45, .minutos = 20};
	struct horario teste2 = {11, 33};

	printf("%i:%i:%i ", agora.horas, agora.minutos, agora.segundos);
	printf("%i:%i:%i ", teste.horas, teste.minutos, teste.segundos);
	printf("%i:%i:%i ", teste2.horas, teste2.minutos, teste2.segundos);

	return 0;
}
