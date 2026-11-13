#include<stdlib.h>
#include<string.h>

#include "listaMC.h"




void inserirM(marca*& M, int codigo, float nota)
{
	marca *novo, *aux;
	novo = (marca*) calloc(1, sizeof(marca));
	novo->codigo = codigo;
	novo->nota = nota;

	if(M == NULL)
		M = novo;
	else{
		aux = M;
		while(aux->prox != NULL)
			aux = aux->prox;
		aux->prox = novo;
	}
}

float buscaMarca(marca* M, int codigo)
{
	marca *aux = M;
	while(aux != NULL){
		if(aux->codigo == codigo)
			return aux->nota;

		aux = aux->prox;
	}

	return 0.0;
}


void inserirC(carro*& C, char *modelo, int ano, int codigomarca)
{
	carro *novo;
	novo = (carro*) calloc(1, sizeof(carro));
	strcpy(novo->modelo, modelo);
	novo->ano = ano;
	novo->codigomarca = codigomarca;
	novo->prox = C;
	C = novo;
}


void listagem(marca* M, carro* C)
{
	carro* p = C;
	while(p != NULL)
	{
		nota = buscaMarca(M, p->codigomarca)
		printf("%s %d %.1f", p->modelo, p->ano, nota);
		p = p->prox;
	}
}


void removerM(marca*& M, carro* C, int codigo)
{
	if(marcaCadastrada)
}

int marcaCadastrada(marca* M, carro* C, int codigo)
{
	carro *p = C;
	while(p != NULL){
		if(p->codigomarca == codigo)
			return 1;

		p = p->prox;
	}

	return 0;
}


void desalocaMarca(marca *&)
{

}


void desalocaCarro(carro *&)
{

}


