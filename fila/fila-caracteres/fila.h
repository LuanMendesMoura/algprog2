/*fila simplesmente encadeada - FILA DE CARACTERES*/
#include<stdio.h>
#include<stdlib.h>

 struct celulaF{
    char chave;
    struct celulaF *prox;
};

// acrescenta um novo no ao final da FILA
void enfileirar(char x, celulaF *&i, celulaF *&f);
// remove o primeiro no da FILA, retorna o valor que estava la armazenado
char desenfileirar(celulaF *&i, celulaF *&f);

// desaloca todos os nos da FILA
void desalocarF(celulaF *&L);
// imprime todos os valores da FILA
void imprimeF(celulaF *p);

