/* PROGRAMA PARA LER UMA MATRIZ, O NÚMERO DE UMA LINHA L, UMA CONSTANTE K 
E MULTIPLICAR A LINHA L PELA CONSTANTE K. CONSIDERE UMA MATRIZ DE ORDEM 3 
(para comecar).
*/

#include<stdio.h>
#define MAX 3

// funcao le uma matriz de ordem n
void leitura(int n, int M[MAX][MAX]);

// funcao imprime uma matriz de ordem n
void imprime(int n, int M[][MAX]);

// funcao multiplica um vetor(linha da matriz) por uma constante K
void multLinha(int n, int* M, int K);

void multLinha2(int n, int* M, int K);


int main()
{
	int mat[MAX][MAX];
	int n,	// qtde de linhas e colunas
		L, 	// numero da linha
		K;	// fator K
	
	n = MAX;
	// leitura da matriz
	leitura(n, mat);

	printf("Digite o numero da linha: ");
	scanf("%d", &L);

	printf("Digite um fator K: ");
	scanf("%d", &K);

	// multiplicar a linha L por K
	multLinha(n, mat[L], K);

	// impressao da matriz
	imprime(n, mat);

	return 0;
}


// funcao le uma matriz de ordem n
void leitura(int n, int M[MAX][MAX])
{
	int *p;
	for(p = M[0]; p < M[0] + (n*n); p++)
		scanf("%d", p);
}

// funcao imprime uma matriz de ordem n
void imprime(int n, int M[][MAX])
{
	int *p;
	for(p = &M[0][0]; p <= &M[n-1][n-1]; p++)
		printf("%d ", *p);
}

// funcao multiplica um vetor(linha da matriz) por uma constante K
void multLinha(int n, int* M, int K)
{
	int *p;
	for(p = M; p < M + n; p++)
		*p = *p * K;
}


// funcao multiplica um vetor(linha da matriz) por uma constante K
void multLinha2(int n, int* M, int K)
{

}

