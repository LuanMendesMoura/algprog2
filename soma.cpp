#include<stdio.h>

int soma(int N)
{
	if(N == 1)
		return 1;
	else 
		return soma(N-1) + N;
}

int main()
{
	int N;

	scanf("%d", &N);
	printf("%d\n", soma(N));

	return 0;
}
