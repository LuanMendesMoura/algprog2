#define CARROS_H

#define MAX 15
#define TAM 30

typedef struct {
    char marca[MAX];
    int ano;
    float preco;
} tCarro;

/* Protótipos das funções */
void menu();
void leitura(tCarro carros[], int *n);
void listarCarros(tCarro carros[], int n);
double calcMedia(tCarro carros[], int n, int ano);
