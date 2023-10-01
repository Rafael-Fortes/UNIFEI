typedef struct lista Lista;

Lista *criarLista();
int liberarLista(Lista *li);
void imprimirLista(Lista *li);

int tamanhoLista(Lista *li);
int listaCheia(Lista *li);
int listaVazia(Lista *li);

int insereListaFinal(Lista *li, int dado);
int insereListaInicio(Lista *li, int dado);
int insereListaOrdenada(Lista *li, int dado);

int removeListaFinal(Lista *li);
int removeListaInicio(Lista *li);
int removeListaIndice(Lista *li, int indice);
int removeListaDado(Lista *li, int dado);

int obterListaIndice(Lista *li, int indice);
int obterListaDado(Lista *li, int dado);