#include <stdio.h>

bool contem_par (int n, int V[])
{
	if (n == 0)
		return false;
	else {
		if ((V[n-1]) % 2 == 0)
			return true;
		else {
			return contem_par(n-1, V);
		}
	}
}

int main()
{
	int n;
	int v[10];
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &v[i]);
	
	printf("%d\n", contem_par(n, v));
	return 0;
}