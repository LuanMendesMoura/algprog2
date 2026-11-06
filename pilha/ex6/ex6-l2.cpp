#include<ctype.h>   // toupper, tolower
#include<stdio.h>
#include "lista.h"


int main()
{
    char str[40];
    celula* lista = NULL;
    celula* listaEmOrdem = NULL;

    celula* criarLista(celula* lista);

    printf("Digite uma sequencia de caracteres alternando letra e algarismo: ");
    scanf("%s", str);

    // criando uma lista
    for(int i = 0; str[i] != '\0'; i++){
        inserir_fim(str[i], lista);
    }

    // criando uma nova lista de saida
    celula* novaLista = criarLista(lista);

    imprimir(novaLista);

    desalocar(lista);
    desalocar(novaLista);

    listaEmOrdem = criarLista(lista);

    imprimir(listaEmOrdem);

    return 0;
}

celula* criarLista(celula* lista)
{
    celula* listaC = NULL;
    celula* topo = NULL;

    while(lista != NULL)
    {
        if(toupper(lista->chave) >= 'A' && toupper(lista->chave) <= 'Z')
            inserir_fim(lista->chave, listaC);

        else if(lista->chave >= '0' && lista->chave <= '9')
            inserir_inicio(lista->chave, topo);

        lista = lista->prox;
    }

    if(listaC != NULL){
        celula* aux = listaC;

        while(aux->prox != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = topo;
    }

    else
        listaC = topo;

    return listaC;
}