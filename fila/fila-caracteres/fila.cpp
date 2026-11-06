/*fila simplesmente encadeada - FILA DE CARACTERES*/
#include "fila.h"


/*Função recebe um ponteiro para o inicio da fila, um ponteiro para o final da fila e o
elemento x que deseja inserir*/
void enfileirar(char x, celulaF *&i, celulaF *&f)
{
    celulaF *nova;

    nova = (celulaF *) malloc(sizeof (celulaF));
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
char desenfileirar(celulaF *&i, celulaF *&f)
{
    celulaF *aux;
    int num;

    if(i == NULL) // RETORNA UM CARACTER BRANCO SE FILA ESTA VAZIA
        return ' ';
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
void desalocarF(celulaF *&L)
{
    celulaF *aux;

    while(L != NULL)
    {
        aux = L;
        L = L->prox;
        free(aux);
    }
}


// Imprime a lista L
void imprimeF(celulaF *L)
{
    celulaF *p;
    for(p = L; p != NULL; p = p->prox)
        printf("%c ", p->chave);

}
