#include <stdio.h>
#include <string.h>
#define MAX 5

struct tEletro {
	int potencia;
	float tempo;
	char nome[15];
};

int main() {

	struct tEletro eletros[MAX];
	float consumoTotal = 0;
	float consumoRelativo = 0;
	int dias;

	for(int i = 0; i < MAX; i++){
		scanf(" %[^\n]", eletros[i].nome);
		scanf("%d", &eletros[i].potencia);
		scanf("%f", &eletros[i].tempo);
	}

	scanf("%d", &dias);

	for(int i = 0; i < MAX; i++){
		consumoTotal = consumoTotal + eletros[i].potencia * eletros[i].tempo;
	}

	consumoTotal = consumoTotal * dias;
	printf("%.2f\n", consumoTotal);

	for(int i = 0; i < MAX; i++){
		consumoRelativo = ((eletros[i].potencia * eletros[i].tempo * dias)/consumoTotal)*100;
		printf("%.2f\n", consumoRelativo);
	}

	return 0;
}