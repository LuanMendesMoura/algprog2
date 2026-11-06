#include<stdio.h>



int main()
{
    int op;
    char nome[40];
    
    
    do
    {
        printf("\n\n 1 - Inserir Med 1\n 2 - Inserir Med 2\n 3 - Atender med 1\n 4 - Atender med 2\n 6 - Imprimir \n 7 - sair \n Opcao: ");
        scanf("%d", &op);

        if(op == 1)
        {
            scanf(" %s", nome);
            
            
        }
        else if(op == 2)
        {
            scanf(" %s", nome);
            
        }
        else if(op == 6)
        {
            printf("\nFila 1:\n");
            
            printf("\nFila 2:\n");
            
        }
        else if(op == 4)
        {
        
            

        }
    }while(op != 7);
    
    
    return 0 ;
}
