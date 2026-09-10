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

	for(int i = 0; i < MAX; i++){
		scanf(" %[^\n]", eletros[i].nome);
		scanf("%d", &eletros[i].potencia);
		scanf("%f", &eletros[i].tempo);
	}

	scanf(" %d", dias);

	for(int i = 0; i < MAX; i++){
		if(strcmp(curso_buscar, alunos[i].curso) == 0){
			printf("%d %s\n", alunos[i].matricula, alunos[i].nome);
		}
	}

	return 0;
}