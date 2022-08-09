#include <stdio.h>

struct horario{
	int hora;
	int minuto;
	int segundo;
};

int main(void){
	void receberHorarios(struct horario list[5]);
	void printHorarios(struct horario list[5]);

	struct horario listaHorario[5];

	receberHorarios(listaHorario);
	printHorarios(listaHorario);
	return 0;
}

void receberHorarios(struct horario lista[5]){
	for (int i = 0; i < 5; i++) {
		printf("%i horario(hh:mm:ss): ", i + 1);
		scanf("%i:%i:%i", &lista[i].hora,
				 &lista[i].minuto,
				 &lista[i].segundo);
	}
}

void printHorarios(struct horario lista[5]){
	for (int i = 0; i < 5; i++) {
		printf("%i horario e: %i:%i:%i\n", i + 1,
						 lista[i].hora,
						 lista[i].minuto,
						 lista[i].segundo);
	}
}
