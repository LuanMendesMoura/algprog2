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

/*****************************************/
#include<stdio.h>

int potencia(int x, int n)
{
	if(n == 0)
		return 1;
	else if(n == 1)
		return x;
	else 
		return x * potencia(x, n-1);
}

int main()
{
	int x, n;

	scanf("%d%d", &x, &n);
	printf("%d\n", potencia(x, n));

	return 0;
}