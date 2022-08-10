#include <stdio.h>

int main(void){
	struct horario {
		int hora;
		int minuto;
		int segundo;
	};

	struct horario agora, *depois;
	depois = &agora;

	depois->hora = 20;
	depois->minuto = 40;
	depois->segundo = 50;

	int somatorio = 100;

	struct horario antes;
	antes.hora = somatorio + depois->segundo;  // 100 + depois.segundo = 100 + 50
	antes.minuto = agora.hora + depois->minuto;  // agora.hora + depois.minuto = 20 + 40
	antes.segundo = depois->minuto + depois->segundo;

	printf("%i:%i:%i", antes.hora, antes.minuto, antes.segundo);

	return 0;
}
