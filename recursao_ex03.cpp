#include <stdio.h>

double somar(int n){
	if(n == 1)
		return 1;
	else 
		return somar(n-1) + 1.0/n;
}

int main(){
	int n;
	scanf("%d", &n);
	printf("%g\n",somar(n));

	return 0;
}