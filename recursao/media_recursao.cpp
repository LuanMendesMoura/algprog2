#include<stdio.h>
#define MAX 20

int somaVetor(int n, int v[MAX])
{
	if(n == 1)
		return v[0];
	else
		return somaVetor(n-1, v) + v[n-1];

}

float media(int n, int v[MAX])
{
	return somaVetor(n, v) / (float) n;
}

int main()
{
	int v[MAX];
	int n;

	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &v[i]);

	printf("Media: %.2f", media(n, v));

	return 0;
}