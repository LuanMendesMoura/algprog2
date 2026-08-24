#include <stdio.h>

void impInvertido(int N)
{
	if(N == 1)
		printf("1\n");
	else 
	{
		printf("%d", N);
		impInvertido(N-1);
	}
}

void imprimir(int N)
{
	if(N == 1)
		printf("1");
	else 
	{
		imprimir(N-1);
		printf("%d", N);		
	}
}

int main()
{
	int N;

	scanf("%d", &N);
	impInvertido(N);
	imprimir(N);

	printf("\n");

	return 0;
}