#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main()
{
   int i, n, *vetor, *pt;

   int x1, x2;

   scanf("%d", &n);

   scanf("%d", &x1);
   scanf("%d", &x2);
   
   vetor = (int *) calloc(n , sizeof(int));
   if (vetor != NULL) 
   {
     for (i = 0; i < n; i++)
        scanf("%d", (vetor + i));

     for (pt = vetor; pt < (vetor + n); pt++)
        printf("%d ", *pt);
     printf("\n");
   
     free(vetor);
   }
   else
   		printf("Erro ao alocar espaço\n");
   return 0;
}