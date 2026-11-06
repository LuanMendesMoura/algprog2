/*fila simplesmente encadeada*/
#include<stdio.h>
#include<stdlib.h>


struct pacientes {
    char nome[40];
    struct pacientes *prox;

};


void enfileirar(char *s, pacientes *&i, pacientes *&f);
void desenfileirar(pacientes *&i, pacientes *&f);
void desalocar(pacientes *&L);
void imprime(pacientes *p);

