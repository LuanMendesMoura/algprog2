/*
 definicao de tipos de dados para criacao da lista simplesmente encadeada
 definicao de constantes
 prototipos das funcoes para realizar as operacoes sobre a lista */


struct celula
{
    char chave;
    struct celula *prox;
};

void desalocar(celula* &L);

// insere um novo no no fim da lista
void inserir_fim(char c, celula* &lst);

// insere um novo no inicio fim da lista
void inserir_inicio(char c, celula* &lst);

void remover(char c, celula* &lst);

void imprimir(celula *lst);


