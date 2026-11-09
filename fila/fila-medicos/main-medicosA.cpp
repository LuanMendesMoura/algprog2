#include<stdio.h>
#include "fila-med.h"


int main()
{
    int op;
    char nome[40];
    pacientes *inicioMed1, *fimMed1;
    pacientes *inicioMed2, *fimMed2;

    inicioMed1 = fimMed1 = inicioMed2 = fimMed2 = NULL;

    
    do
    {
        printf("\n\n 1 - Inserir Med 1\n 2 - Inserir Med 2\n 3 - Atender med 1\n 4 - Atender med 2\n 5 - Imprimir nomes em comum \n 6 - Imprimir \n 7 - sair \n Opcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            scanf(" %s", nome);
            enfileirar(nome, inicioMed1, fimMed1);
            
        }
        else if(op == 2)
        {
            scanf(" %s", nome);
            enfileirar(nome, inicioMed2, fimMed2);
            
        }
        else if(op == 3)
        {
            desenfileirar(inicioMed1, fimMed1);
            
        }
        else if(op == 4)
        {
            desenfileirar(inicioMed2, fimMed2);

        }
        else if(op == 5)
        {
            compara_nomes(inicioMed1, inicioMed2);
            
        }
        else if(op == 6)
        {
            printf("\nFila 1:\n");
            imprime(inicioMed1);

            printf("\nFila 2:\n");
            imprime(inicioMed2);

        }
    }while(op != 7);
    
    desalocar(inicioMed1);
    desalocar(inicioMed2);
    
    return 0 ;
}
