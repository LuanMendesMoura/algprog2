/*fila simplesmente encadeada*/
#include "fila.h"


/*Função recebe um ponteiro para o inicio da fila, um ponteiro para o final da fila e o
elemento x que deseja inserir*/
void enfileirar(int x, celula *&i, celula *&f)
{
    celula *nova;

    nova = (celula *) malloc(sizeof (celula));
    nova->chave = x;
    nova->prox = NULL;

    if(i == NULL)
        i = f = nova;
    else{
    	f->prox = nova;
    	f = nova;
    }
}


/*Função recebe o ponteiro para o inicio da fila (e ponteiro para o ultimo no), remove o primeiro e retorna
 o valor do mesmo*/
int desenfileirar(celula *&i, celula *&f)
{
    celula *aux;
    int num;

    if(i == NULL)
        return 0;
    else{
        num = i->chave;
        aux = i;
        i = i->prox;
        if(i == NULL)
            f = NULL;
        free(aux);
        return num;
    }
}

/*Funcao que apaga todos os nós da lista L*/
void desalocar(celula *&L)
{
    celula *aux;

    while(L != NULL)
    {
        aux = L;
        L = L->prox;
        free(aux);
    }
}

void imprime(celula *L)
{
    celula *p;
    for(p = L; p != NULL; p = p->prox)
        printf("%d ", p->chave);

}
