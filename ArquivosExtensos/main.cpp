#include <stdio.h>
#include "carros.h"

int main() {
    int opcao;
    tCarro carros[TAM];
    int n = 0;
    int ano;

    do {
        menu();
        scanf("%d", &opcao);

        if(opcao == 1) {
            leitura(carros, &n);
        }
        else if(opcao == 2) {
            listarCarros(carros, n);
        }
        else if(opcao == 3) {
            printf("Digite o ano: ");
            scanf("%d", &ano);
            double m = calcMedia(carros, n, ano);
            if(m == -1.0)
                printf("Nenhum carro cadastrado com ano %d\n", ano);
            else 
                printf("Media: %.2f\n", m);
        }
    } while(opcao != 4);

    return 0;
}
