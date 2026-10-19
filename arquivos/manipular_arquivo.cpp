/*
 
 PROGRAMA PARA ABRIR UM ARQUIVO TEXTO CONTENDO VARIOS NUMEROS INTEIROS, 
 LER OS NUMEROS DO ARQUIVO E IMPRIMI-LOS NA TELA
 */

#include<stdio.h>  /*FILE, printf, scanf*/
#define MAX 30



int main()
{
    FILE *arqent;
    char nome[MAX];
    int num;


	printf("Nome do arquivo: ");
    scanf(" %s", nome);
    // abrir o arquivo
    arqent = fopen(nome, "r");
    if(arqent == NULL)
    	printf("Erro na abertura do arquivo %s.", nome);
    else{
    	// ler os dados e processamento
    	fscanf(arqent, "%d", &num);
    	while( feof(arqent) == 0 )
    	{
    		printf("%d ", num);
    		fscanf(arqent, "%d", &num);
    	}

    	// fechar o arquivo
    	fclose(arqent);
    }
    
    printf("\n");
    return 0;
}






/*        fscanf(arqent, "% ", &num);
        while( feof(arqent) == 0)   // chegou ao final do arquivo ?
        {
            ..... processamento

            fscanf(arqent, "% ", );        
        }   */ 





