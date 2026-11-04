#include <stdio.h>
#include <string.h>

struct aeroporto{

    char nome[100];
    int capacidade;
    int identificador;
};

struct voo{

    char nome[100];
    int identificador;
    int destino;
    int origem;
};


int main(){


    int qtd_aeroporto;
    scanf(" %d", &qtd_aeroporto);

    int qtd_voos;
    scanf(" %d", &qtd_voos);

    /*declarar vetores*/
    struct aeroporto aeroportos[qtd_aeroporto];
    struct voo voos[qtd_voos];

    /*ler os aeroportos */
    for(int i = 0; i < qtd_aeroporto; i++){
        scanf(" %[^\n]", aeroportos[i].nome);
        scanf("%d", &aeroportos[i].capacidade);
        scanf("%d", &aeroportos[i].identificador);
    }

    int id;
    int j=0;
    int op;
    char nome_antigo[100];

    do{

        
        scanf(" %d", &op);

        if(op == 1){// Adicionar Voo (orgiem e destino)

            printf("op 1 \n");

            scanf(" %[^\n]", voos[j].nome);
            scanf("%d", &voos[j].origem);
            scanf("%d", &voos[j].destino);
            scanf("%d", &voos[j].identificador);

            j = j + 1;
            
        }else if (op == 2){// Consultar todos os Voos de origem ou destino de determinado aeroporto pelo ID, se tiver cancelado deve mostrar;

            printf("op 2 \n");

            scanf("%d", &id);
            for(int i = 0; i < j; i++){
                if(id == voos[i].origem || id == voos[i].destino)
                    printf("%s - %d - %d\n", voos[i].nome, voos[i].origem, voos[i].destino);
            }


        }else if (op == 3){// Cancelar Voo pelo ID

            printf("op 3 \n");

            scanf("%d", &id);
            for(int i = 0; i < j; i++){
                if(voos[i].identificador == id){

                    strcpy(nome_antigo, voos[i].nome);
                    strcpy(voos[i].nome, "Cancelado - ");
                    strcat(voos[i].nome, nome_antigo);
                }
            }

        }

    }while(op != 0);



    return 0;
}