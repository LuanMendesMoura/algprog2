#include <stdio.h>

void impInvertido(int N)
{
	if(N == 1)
		printf("1\n");
	else 
	{
		printf("%d", N)
		impInvertido(N-1)
	}
}

int main()
{
	int N;

	scanf("%d", &N);
	impInvertido(N);

	return 0;
}