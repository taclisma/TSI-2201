typedef struct{
	int dado;
	struct tipoNo* prox;
	struct tipoNo* ant;
} tipoNo;

typedef struct{
	tipoNo* head;//primeiro
	tipoNo* tail;//ultimo
	int size;//tamanho: opcional
} tFila;

void inicializar (tFila *f);
int vazia (tFila *f);
int inserir(tFila *f, int d);
void imprimeFila (tFila *f);
int remover(tFila *f, int *d);
int tamanho(tFila *f);

