/*
arquivo contendo todos as funcoes implementadas*/
#include "lista.h"
#include <stdio.h> /*printf*/
#include <stdlib.h> /*malloc, calloc, free*/



/*Funcao que apaga todos os nos da lista L*/
void desalocar(celula* &L)
{
    celula *aux;

    while( L != NULL)
    {
        aux = L;

        L = aux->prox;

        free(aux);
    }
}


void inserir_fim(char c, celula* &lst)
{
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->chave = c;
    novo->prox = NULL;

    if(lst == NULL)
        lst = novo;
    else{
        p = lst;
        while(p->prox != NULL)
            p = p->prox;

        p->prox = novo;
    }
}


void inserir_inicio(char c, celula* &lst)
{
    celula *novo;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->chave = c;
    novo->prox = lst;
    lst = novo;
}


void remover(char c, celula* &lst)
{
    celula *p, *q;
    p = NULL;
    q = lst;
    while (q != NULL && q->chave != c) {
        p = q;
        q = q->prox;
    }
    if(q == NULL)
        printf("%c nao foi encontrado.", c);
    else{
        if (p != NULL)
            p->prox = q->prox;
        else
            lst = q->prox;

        free(q);
    }
}


/*Funcao imprime o campo chave armazenado em cada no da lista L*/
void imprimir(celula *lst)
{
    celula *p;
    for(p = lst; p != NULL; p = p->prox)
        printf("%c ", p->chave);

}


