/*fila simplesmente encadeada*/
#include<stdio.h>
#include<stdlib.h>

 struct celula{
    int chave;
    struct celula *prox;
};

void enfileirar(int x, celula *&i, celula *&f);
int desenfileirar(celula *&i, celula *&f);
void desalocar(celula *&L);
void imprime(celula *p);

