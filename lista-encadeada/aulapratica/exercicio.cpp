/*Programa para realizar um cadastro de pessoas, contendo o seguinte 
menu

1 - Cadastra o nome e idade de uma pessoa em uma lista simplesmente 
encadeada.
2 - Remover todas as pessoas que tem idade igual a uma idade fornecida 
pelo usuario
3 - Ler um conjunto de pessoas cujos dados estao em um arquivo fornecido pelo usuario
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 30

struct pessoa
{
	int idade;
	char nome[MAX+1];
	pessoa *prox;
};

/* inserir um novo no na lista L com os dados enviados
para a funcao - a funcao deve retornar o ponteiro da lista
de pessoas
Obs: perceba que o ponteiro da lista nao eh passado por referencia*/
pessoa* inserir(int id, char *nome, pessoa *L)
{
	pessoa *novo, *p;
	novo = (pessoa*) calloc(1, sizeof(pessoa));
	novo->idade = id;
	strcpy(novo->nome, nome);

	if(L == NULL)
		L = novo;
	else{
		p = L;
		while(p->prox != NULL)
			p = p->prox;

		p->prox = novo;
	}
	printf("%s", p->nome);
	return L;
}

/*funcao recebe uma idade e remove todas as pessoas que possuem
tal idade
Obs: perceba que o ponteiro da lista EH passado por referencia*/
void removerIdade(int id, pessoa *&lista)
{

}

void imprimir(pessoa *lista)
{
	while(lista)
	{
		printf("%s %d\n", lista->nome, lista->idade);
		lista = lista->prox;
	}
}

void carregarArquivo(pessoa *&inicio){
	char nomeArq[MAX+1];
	char nome[MAX+1];
	int idade;
	FILE* arq;

	scanf(" %s", nomeArq);
	arq = fopen(nomeArq, "r");

	if(!arq)
		printf("Arquivo %s nao pode ser aberto\n", nomeArq);
	else{
		fscanf(arq, " %[^\n]", nome);
		fscanf(arq, "%d", &idade);
		while(feof(arq) == 0)
		{
			inicio = inserir(idade, nome, inicio);
			fscanf(arq, " %[^\n]", nome);
			fscanf(arq, "%d", &idade);
		}
		fclose(arq);
	}
}


int main()
{
	int op;
	int idade;
	char nome[MAX+1];
	pessoa *inicio = NULL;

	do{
		printf("\n1 - Inserir pessoa");
		printf("\n2 - Remover idade");
		printf("\n3 - Imprimir");
		printf("\n4 - Ler pessoas de um arquivo");
		printf("\n5 - Sair");
		printf("\nOpcao: ");
		scanf("%d", &op);

		if(op == 1){
			scanf(" %[^\n]", nome);
			scanf("%d", &idade);

			inicio = inserir(idade, nome, inicio);
			printf("Pessoa cadastrada com sucesso\n");
		}
		else if(op == 3){
			imprimir(inicio);
		}
		else if(op == 4){
			carregarArquivo(inicio);
		}

	}while(op != 5);	
}