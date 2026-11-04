#include <stdio.h>
#include "carros.h"

void menu() {
    printf("\n[1] Cadastrar um carro\n");
    printf("[2] Listar carros\n");
    printf("[3] Media de precos de um ano\n");
    printf("[4] Sair\n");
    printf("Opcao: ");
}

void leitura(tCarro carros[], int *n) {
    if (*n >= TAM) {
        printf("Erro: Limite maximo de carros atingido!\n");
        return;
    }
    printf("Digite a marca do carro: ");
    scanf(" %[^\n]", carros[*n].marca);
    printf("Digite o ano do carro: ");
    scanf(" %d", &carros[*n].ano);
    printf("Digite o preco do carro: ");
    scanf(" %f", &carros[*n].preco);
    (*n) = (*n) + 1;
}

void listarCarros(tCarro carros[], int n) {
    if (n == 0) {
        printf("Nenhum carro cadastrado.\n");
        return;
    }
    printf("MARCA -- ANO -- PRECO\n");
    for(int i = 0; i < n; i++) {
        printf("%s %d %.2f\n", carros[i].marca, carros[i].ano, carros[i].preco);
    }
}

double calcMedia(tCarro carros[], int n, int ano) {
    double soma = 0.0;
    int qnt = 0;

    for(int i = 0; i < n; i++) {
        if(carros[i].ano == ano) {
            qnt = qnt + 1;
            soma = soma + carros[i].preco;
        }
    }
    
    if (qnt == 0)
        return -1.0;
    else
        return soma / qnt;
}
