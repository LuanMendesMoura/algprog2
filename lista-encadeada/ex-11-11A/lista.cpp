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


void inserir_fim(int n, celula* &lst)
{
    celula *novo, *p;

    novo = (celula*) malloc(sizeof(celula));
    novo->chave = n;
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


void inserir_inicio(int n, celula* &lst)
{
    celula *novo;

    novo = (celula*) calloc(1, sizeof(celula));
    novo->chave = n;
    novo->prox = lst;
    lst = novo;
}


void remover(int x, celula* &lst)
{
    celula *p, *q;
    p = NULL;
    q = lst;
    while (q != NULL && q->chave != x) {
        p = q;
        q = q->prox;
    }
    if(q == NULL)
        printf("%d nao foi encontrado.", x);
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
        printf("%d ", p->chave);

}



void inserir_aposI (int x, int i, celula *&L)
{
    int cont;
    celula* p = L;
    celula* novo = (celula*) calloc(1, sizeof(celula));
    novo->chave = x;

    if(L == NULL)
        L = novo;
    else{
        cont = 1;
        while(cont < i && p->prox != NULL)
        {
            cont++;
            p = p->prox;
        }
        novo->prox = p->prox;
        p->prox = novo;
    }
    
}


void removerPares(celula *&L)
{
    celula *ant = NULL;
    celula *p = L;

    while(p != NULL)
    {
        if(p->chave % 2 == 0){
            // remocao do primeiro no
            if(ant == NULL){
                L = L->prox;
                free(p);
                p = L;
            }
            // remocao dos outros nos
            else{
                ant->prox = p->prox;
                free(p);
                p = ant->prox;
            }
        }
        else{
            ant = p;
            p = p->prox;
        }
    }
}







