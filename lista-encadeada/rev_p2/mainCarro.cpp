#include<stdio.h>
#include<stdlib.h>

#include "listaMC.h"


/*funcao main*/
int main()
{
    int op;
    marca *lista_marcas = NULL;
    carro *lista_carros = NULL;

    int codigo;
    float nota;
    char modelo[40];
    int ano;




    do
    {
        printf("\n1 - Cadastrar uma marca");
        printf("\n2 - Cadastrar um carro");
        printf("\n3 - Listagem de carros");
        printf("\n4 - Exclusao de uma marca");
        printf("\n5 - Sair");
        printf("\nOpcao: ");
        scanf("%d", &op);

        if(op == 1){
            printf("\nDigite o codigo da marca: ");
            scanf("%d", &codigo);
            printf("\nDigite a nota da marca: ");
            scanf("%f", &nota);

            inserirM(lista_marcas,codigo, nota);
        }
        else if(op == 2){
            printf("\nDigite o codigo da marca");
            scanf("%d", &codigo);
            if(buscaMarca(lista_marcas, codigo) == 0.0)
                printf("Codigo de marca não existe!\n")
            else{
                printf("\nDigite o modelo: ");
                scanf(" %s", modelo);
                printf("\nDigite o ano do carro: ");
                scanf("%d", &ano);

                inserirC(lista_carros, modelo, ano, codigo);
                printf("Carro cadastrado com sucesso.\n");
            }

        }
        else if(op == 3){
            listagem(lista_marcas, lista_carros);

        }
        else if(op == 4){
            printf("\nDigite o codigo da marca");
            scanf("%d", &codigo);
            if(marcaCadastrada(lista_marcas, lista_carros, codigo))
                printf("Erro, marca nao pode ser removida!\n");
            else{
                removerM(lista_marcas, lista_carros, codigo);   
            }
        }

    }while(op != 5);

    // desalocar listas
    desalocaMarca();
    desalocaCarro();

    return 0;
}
