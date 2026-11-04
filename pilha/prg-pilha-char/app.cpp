#include <stdio.h>
#include "pilha.h"


int main()
{
    celula *topo = NULL;       // ponteiro para o primeiro nó (célula) da lista
    int op;
    char ch;

    do
    {
        printf("\n 1 - Empilhar");
        printf("\n 2 - Desempilhar");
        printf("\n 3 - Imprimir");
        printf("\n 4 - Sair");
        printf("\n Opcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            printf("\nCaracter a empilhar: ");
            scanf(" %c", &ch);

            empilhar(ch, topo);

        }
        else if(op == 2){
            ch = desempilhar(topo);
            if(ch == '0')
                printf("\nPilha vazia");
            else printf("\nValor desempilhado: %c", ch);
        }
        else if(op == 3)
            imprime(topo);

    }while(op != 4);

    desalocar(topo);
    return 0;
}
