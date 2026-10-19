#include <stdio.h>
#include <string.h>
#define MAX 5

struct tAluno {
	int matricula;
	char nome[30], curso[30];
};

int main() {

	struct tAluno alunos[MAX];
	char curso_buscar[30];

	for(int i = 0; i < MAX; i++){
		scanf("%d", &alunos[i].matricula);
		scanf(" %[^\n]", alunos[i].nome);
		scanf(" %[^\n]", alunos[i].curso);
	}

	scanf(" %[^\n]", curso_buscar);

	for(int i = 0; i < MAX; i++){
		if(strcmp(curso_buscar, alunos[i].curso) == 0){
			printf("%d %s\n", alunos[i].matricula, alunos[i].nome);
		}
	}

	return 0;
}