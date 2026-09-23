#include<stdio.h>
#define MAX 20


void leitura(int n, int *v);

int  prodescalar(int n, int *v1, int *v2);


int main()
{
    int n, v1[MAX], v2[MAX];
    int soma;
    

    scanf("%d", &n);
    /*leitura de n e dos elementos do vetor*/
    printf("Leitura do vetor 1: \n");
    leitura(n, v1);

    printf("Leitura do vetor 2: \n");
    leitura(n, v2);

    /*produto escalar - chamada da funcao*/
    soma = prodescalar(n, v1, v2);

    /*saida */
    printf("Prod escalar: %d\n", soma);
    
    return 0;
}



/*funcao le um vetor usando um ponteiro para acessar as posicoes*/
void leitura(int n, int *v)
{
    int *p;
    for(p = v; p < v + n; p++)
        scanf("%d", p);
}

/*funcao calcula e retorna o produto escalar entre dois vetores*/
int  prodescalar(int n, int *v1, int *v2)
{
    int *p, *q;
    int soma = 0;

    for(p=v1, q=v2; p < v1 + n; p++, q++)
        soma = soma + ( *p    *   *q);

    return soma;

}

/*p=v1;
q=v2;
while(p < v1+n){
    soma = soma + ( *p    *   *q);
    p++;
    q++;
}*/



