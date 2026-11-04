#include <stdio.h>
#define MAX 100

/*prototipo da funcao*/
void inverte (int i, int j, int v[MAX]);

int main()
{
    int n;
    int vetor[MAX];


    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &vetor[i]);


    /*chamada da funcao para */
    inverte(0, n-1, vetor);

    /*saida*/
    for(int i = 0; i < n; i++)
        printf("%d ", vetor[i]);

    printf("\n");
    return 0;
}

void inverte (int i, int j, int v[MAX])
{
    if(i < j)
    {
        int aux = v[i];
        v[i] = v[j];
        v[j] = aux;
        inverte(i+1, j+1, v);
    }
}









