/*fila simplesmente encadeada*/
#include "fila-med.h"
#include <string.h>


/*Função recebe um ponteiro para o inicio da fila, um ponteiro para o final da fila e o
elemento x que deseja inserir*/
void enfileirar(char *s, pacientes *&i, pacientes *&f)
{
    pacientes *nova;

    nova = (pacientes *) calloc(1, sizeof (pacientes));
    strcpy(nova->nome, s);

    
    if(i == NULL)
        i = f = nova;
    else{
    	f->prox = nova;
    	f = nova;
    }
}


/*Função recebe o ponteiro para o inicio da fila (e ponteiro para o ultimo no), remove o primeiro e imprime
 o valor do mesmo*/
void desenfileirar(pacientes *&i, pacientes *&f)
{
    pacientes *aux;
    
    
    if(i == NULL)
        printf( "Fila vazia");
    else{
        printf("Removido:%s", i->nome);
        aux = i;
        i = i->prox;
        if(i == NULL)
            f = NULL;
    
        free(aux);
    }
}

/*Funcao que apaga todos os nos da lista L*/
void desalocar(pacientes *&L)
{
    pacientes *aux;

    while(L != NULL)
    {
        aux = L;
        L = L->prox;
        free(aux);
    }
}

void imprime(pacientes *L)
{
    pacientes *p;
    for(p = L; p != NULL; p = p->prox)
        printf("%s ", p->nome);

}
