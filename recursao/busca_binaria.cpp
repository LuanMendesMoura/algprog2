#include <stdio.h>

#define MAX 100

void imprime(int n, int v[MAX])
{
	for(int i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
}

int insere_R(int n, int v[MAX], int k, int y)
{
	if(n == k){
		v[k] = y;
		return n+1;
	}
	v[n] = v[n-1];
	
	return 1 + insere_R(n-1, v, k, y);
}

int insere(int n, int v[MAX], int k, int y)
{
	for(int i = n; i > k; i--)
		v[i] = v[i-1];

	v[k] = y;

	return n+1;
}

int main()
{
	int n;
	int vetor[MAX];
	int k,y;	

	printf("Digite n, seguido dos n elementos\n");
	scanf("%d", &n);

	for(int i =0; i< n; i++)
		scanf("%d", vetor+i);

	printf("posicao de k e o elemento y\n");
	scanf("%d%d", &k, &y);

	n = insere_R(n, vetor, k, y);

	imprime(n, vetor);

}

