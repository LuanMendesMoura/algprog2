/*Faca um programa para cadastrar carros com os seguintes dados: 
marca (maximo de 15 letras), ano e preço. Suponha que no maximo serao cadastrados
30 carros. O seu programa deve possuir o seguinte menu:

1 - Cadastrar um carro: nesta opcao o usuario informa os dados de APENAS UM CARRO, que 
deverão ser armazenados num vetor de registros.

2 - Listar carros: lista os dados de todos os carros cadastrados

3 - Media de precos: calcula e imprime a media dos precos dos carros de um determinado
ano. O usuario informa um ano e a media dos precos dos carros deste ano
deve ser impressa.

FUNCOES A CRIAR:
1 - Uma funcao para cadastrar um carro: recebe o vetor e o numero de carros cadastrados 
ate o momento. Atencao: nesta funcao o numero de carros deverá aumentar em uma unidade.
2 - Uma funcao para listar os dados de todos os carros: recebe o vetor e o numero de carros
cadastrados ate o momento
3 - Uma funcao para calcular e retornar a media dos precos dos carros de um determinado ano 
informado pelo usuario: recebe o vetor, o numero de carros
cadastrados ate o momento e um ano (a ser consultado), retorna a media.
*/

#include <stdio.h>
#include <string.h>

#define MAX 15
#define TAM 30

struct tCarro
{
	char marca[MAX];
	int ano;
	float preco;
};

/*prototipo das funcoes*/
void menu();
void leitura(tCarro carros[], int *n);
void listarCarros(tCarro carros[], int n);
double calcMedia(tCarro carros[], int n, int ano);


// funcao principal
int main()
{
	// declaracao de variaveis
	int opcao;
	tCarro carros[TAM];
	int n = 0;	// qtde de carros cadastrados
	int ano;
	 

	do{
		menu();
		scanf("%d", &opcao);

		if(opcao == 1)
		{
			 leitura(carros, &n);

		}
		else if(opcao == 2)
		{
			// imprimir todos os carros cadastrados - funcao
			listarCarros(carros, n);
			 
		}
		else if(opcao == 3)
		{
			// ler um ano e imprimir a media de precos dos carros do ano
			printf("Digite o ano: ");
			scanf("%d", &ano);
			double m = calcMedia(carros, n, ano);
			if(m == -1.0)
				printf("Nenhum carro cadastrado com ano %d\n", ano);
			else 
				printf("Media: %.2f", m);

		}
	}while(opcao != 4);

	return 0;
}

void menu()
{
	printf("\n[1] Cadastrar um carro\n");
	printf("[2] Listar carros\n");
	printf("[3] Media de precos de um ano\n");
	printf("[4] Sair\n");
	printf("Opcao: ");
}

void leitura(tCarro carros[], int *n)
{
	 printf("Digite a marca do carro: ");
	 scanf(" %[^\n]", carros[*n].marca);
	 printf("Digite o ano do carro: ");
	 scanf(" %d", &carros[*n].ano);
	 printf("Digite o preço do carro: ");
	 scanf(" %f", &carros[*n].preco);
	 (*n) = (*n) + 1;

}


void listarCarros(tCarro carros[], int n)
{
	printf("MARCA -- ANO -- PREÇO\n");
	 for(int i = 0; i < n; i++){
	 	printf("%s %d %.2f\n", carros[i].marca, carros[i].ano, carros[i].preco);
	 }

}

double calcMedia(tCarro carros[], int n, int ano)
{
	double soma = 0.0;
	int qnt = 0;

	 for(int i = 0; i<n; i++){
	 	if(carros[i].ano == ano)
	 		qnt = qnt + 1;
	 		soma = soma + carros[i].preco;
	 }
	if (qnt == 0)
		return -1.0;
	else
		return soma/qnt;

}
