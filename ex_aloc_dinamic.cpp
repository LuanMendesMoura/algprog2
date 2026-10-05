#include <stdio.h>
#include <stdlib.h>

void troca(int &a, int &b)
{
	int aux;

	aux = a;
	a = b;
	b = aux;
}

void selectionSort(int n, int *v)
{
	int i, j, min;
	for (i = 0; i < n - 1; i++) 
	{
		min = i;
		for (j = i+1; j < n; j++)
			if (v[j] < v[min])
				min = j;
		troca(v[i], v[min]);
	}
}

int balanceada(int n, int *v) 
{
	int ref = v[0] + v[n-1];
	for(int i=1, j=n-2; i < j; i++, j--){
		if(ref != v[i]+v[j])
			return 0;
	}

	return 1;
}

int main()
{
	int n, *vetor;
	int resp;

	scanf("%d", &n);

	// alocando o vetor
	vetor = (int *) calloc(n , sizeof(int));
	if (vetor != NULL) 
	{
		// lendo o vetor
		for (int i = 0; i < n; i++)
			scanf("%d", vetor+i);
	}
	else
		printf("Impossível alocar espaço\n");

	selectionSort(n, vetor);

	resp = balanceada(n, vetor);
	if(resp)
		printf("É balanceada\n");
	else 
		printf("Não é balanceada\n");

	free(vetor);/*desalocando o vetor*/

	return 0;
}