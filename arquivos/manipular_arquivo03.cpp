#include<stdio.h>  /*FILE, printf, scanf*/
#define MAX 30


int main()
{
    
    FILE*  arq, *ptrsaida;      /* variavel para acessar um arquivo */
    char nome[MAX];     /* nome do arquivo a ser aberto*/
    char nomeA[MAX];    /* nome do aluno */
    float n1, n2, media;
    
    
    scanf(" %s", nome);
    
    /*abertura de um arquivo*/
    arq = fopen(nome, "r");
    
    /* verificando se arquivo foi aberto */
    if( arq == NULL )
    {
        printf("\n\n Arquivo %s nao pode ser aberto.\n\n", nome);
    }
    else
    {
        //Escrever (sobescrever).
        //ptrsaida = fopen("media.txt","w");

        //Ele continua escrevendo sem apagar o anterior.
        ptrsaida = fopen("media.txt","a");
        if(ptrsaida == NULL)
            printf("Erro ao abrir media.txt\n");
        fscanf(arq, "%s %f %f", nomeA, &n1, &n2);

    while( feof(arq) == 0 )    /*CHEGOU AO FINAL DO ARQUIVO??? verificando se chegou ao fim do arquivo*/
        {
            /*calcula da media e impressao na tela*/
            media = (n1+n2)/2;
            fprintf(ptrsaida, "%s %.2f\n", nomeA, media);
        
            /*leitura dos proximos dados do arquivo*/
            fscanf(arq, "%s %f %f", nomeA, &n1, &n2);
        }
        /*fechamento do arquivo*/
        fclose(arq);
        fclose(ptrsaida);
    }

    printf("\n");    
    return 0;
}
     