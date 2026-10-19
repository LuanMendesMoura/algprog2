/*
 
 PROGRAMA PARA ABRIR UM ARQUIVO TEXTO CONTENDO VARIOS DADOS DE ALUNOS 
 (PRIMEIRO NOME E DUAS NOTAS),
 LER OS DADOS E CALCULAR A MEDIA ARITMETICA DAS DUAS NOTAS DO ALUNO,
 IMPRIMIR NOME E MEDIA NA TELA

OBS: vamos supor que no arquivo teremos no MAXIMO 30 alunos 
 */

#include<stdio.h>  /*FILE, printf, scanf*/
#define MAX 30

struct tipoAluno{
    char nome[MAX];
    float n1, n2;
    float media;
};

int main()
{
    tipoAluno vetor[MAX];
    int n = 0;          /*qtde de alunos*/
    FILE*  arq;         /* variavel para acessar um arquivo */
    FILE*  arqsaida;    /* variavel para manip arquivo de saida*/ 
    char nome[MAX];     /* nome do arquivo a ser aberto*/
    
    
    scanf(" %s", nome);
    
    /*abertura de um arquivo*/
    arq = fopen(nome, "r");
    
    /* verificando se arquivo foi aberto */
    if( arq == NULL ){
        printf("\n\n Arquivo %s nao pode ser aberto.\n\n", nome);
    }
    else
    {
        arqsaida = fopen("media.txt", "a");
        if( arqsaida == NULL )
        {
            printf("\n\n Arquivo media.txt nao pode ser aberto.\n\n");
        }
        else
        {
            printf("Arquivo foi aberto!\n\n");
            
            /*JOAO  2.5 7.5*/
            
            /*leitura dos dados do arquivo*/
            fscanf(arq, "%s %f %f", vetor[n].nome, &vetor[n].n1, 
                &vetor[n].n2);
            
            while( feof(arq) == 0 )    /*CHEGOU AO FINAL DO ARQUIVO??? verificando se chegou ao fim do arquivo*/
            {

                /*calcula da media e impressao na tela*/
                vetor[n].media = (vetor[n].n1+vetor[n].n2)/2;
                
                fprintf(arqsaida, "%s %.2f\n", vetor[n].nome, vetor[n].media);
            
                // adicionamos 1 a n, pois novo aluno será lido
                n++;

                /*leitura dos proximos dados do arquivo*/
                fscanf(arq, "%s %f %f", vetor[n].nome, &vetor[n].n1, 
                &vetor[n].n2);
            }
            
            /*fechamento do arquivo*/
            fclose(arq);
            fclose(arqsaida);
        }// fim else arqsaida
            
    }
    printf("\n");    
    return 0;
}


    // fscanf();
    // while(    feof(arquivo) == 0)         - chegou ao final do arquivo?
    // {
        /*operacao com o dado lido*/
    
    
    
    
        /*leitura do proximo dado*/
    //    fscanf();
    
    
    
    // }
     