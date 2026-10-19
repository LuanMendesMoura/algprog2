#include <stdio.h>

int contadig(int n)
{
	if (n < 10)
		return 1;

	return 1 + contadig(n/10);
}

int main() 
{
	int num;
	scanf("%d", &num);
	printf("%d\n", contadig(num));
}
