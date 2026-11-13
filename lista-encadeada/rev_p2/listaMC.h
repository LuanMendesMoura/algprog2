#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/*tipo para marca */
struct marca
{
      int codigo;
      float  nota;
      struct marca* prox;
};


/*tipo para carro */
struct carro
{
    char modelo[40];
    int ano;
    int codigomarca;
    struct carro *prox;
};


void inserirM(marca*& M, int , float );

float buscaMarca(marca* M, int );


void inserirC(carro*& , char *, int , int );


void listagem(marca* , carro* );

void removerM(marca*& , carro* , int );

int marcaCadastrada(marca* , carro* , int );

void desalocaMarca(marca *&);


void desalocaCarro(carro *&);


