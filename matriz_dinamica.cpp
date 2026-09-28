#include <stdio.h>
#include <stdlib.h>

int** alocacaoMatriz(int n);
int** desalocaMatriz(int n, int** matriz);
int encontraX(int n, int x, int** matriz);

int main()
{	
	int x, n;

	printf("Digite o valor de X a ser buscado: ");
	scanf("%d", &x);
	printf("Digite o tamanho N da matriz (NxN): ");
	scanf("%d", &n);

	int** matriz = alocacaoMatriz(n);

	if(matriz == NULL){
		printf("Erro de alocação de memória.\n");
		return 0;
	}

	printf("Digite os %d elementos da matriz:\n", n * n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			scanf("%d", &matriz[i][j]);
		}
	}

	int cont = encontraX(n, x, matriz);

	printf("\nTotal de vezes que %d apareceu: %d\n", x, cont);

	desalocaMatriz(n, matriz); 

	return 0;
}

int** alocacaoMatriz(int n) 
{
	int** matriz = (int**) calloc(n, sizeof(int*));

	if(matriz == NULL)	
		return NULL;

	for(int i = 0; i < n; i++){
		matriz[i] = (int*) calloc(n, sizeof(int));
		if(matriz[i] == NULL)
			return NULL;
	}

	return matriz;
}

int** desalocaMatriz(int n, int** matriz)
{
	for(int i = 0; i < n; i++)
		free(matriz[i]);
	
	free(matriz);

	return NULL;
}

int encontraX(int n, int x, int** matriz)
{
	int cont = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(matriz[i][j] == x){
				cont = cont + 1;	
			}
		}
	}
	return cont;
}
