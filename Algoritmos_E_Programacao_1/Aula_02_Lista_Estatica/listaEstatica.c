#include "lista_estatica.h"

#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct lista {
    int qtd; // Quantidade de elementos armazenados na lista
    int dados[MAX]; // Max == Numero máximo de elementos na lista
};


Lista *criarLista() {
    Lista *li = (Lista*) malloc(sizeof(Lista));
    
    if (li != NULL) {
        li->qtd = 0;
    }

    return li;
}

int liberarLista(Lista *li) {
    if (li != NULL) {
        free(li);
    } else {
        return -1;
    }
    
    return 1;
}

void imprimirLista(Lista *li) {
    int i;
    if (li != NULL) {
        for (i=0; i<li->qtd; i++) {
            printf("%d ", li->dados[i]);
        }
    } else {
        printf("Lista não encontrada!");
    }
}

int tamanhoLista(Lista *li) {
    if (li == NULL) {
        return -1;
    } else {
        return li->qtd;
    }
}

int listaCheia(Lista *li) {
    if (li == NULL) {
        return -1;
    } else if (li->qtd == MAX) {
        return 1;
    } else {
        return 0;
    }
}

int listaVazia(Lista *li) {
    if (li == NULL) {
        return -1;
    } else if (li->qtd == 0) {
        return 1;
    } else {
        return 0;
    }
}

int insereListaFinal(Lista *li, int dado) {
    if (li == NULL) return 0;
    if (listaCheia(li)) return 0;

    li->dados[li->qtd] = dado;
    li->qtd++;
    return 1;
}

int insereListaInicio(Lista *li, int dado) {
    if (li == NULL) return 0;
    if (listaCheia(li)) return 0;

    int i;
    for (i=(li->qtd-1); i>=0; i--) {
        li->dados[i+1] = li->dados[i];
    }

    li->dados[0] = dado;
    li->qtd++;

    return 1;
}

int insereListaOrdenada(Lista *li, int dado) {
    if (li == NULL) return 0;
    if (listaCheia(li)) return 0;

    int i=0;
    int j;

    while (i < li->qtd && li->dados[i] < dado) {
        i++;
    }

    for (j=(li->qtd-1); j>=i; j--) {
        li->dados[i+1] = li->dados[i];
    }

    li->dados[i] = dado;
    li->qtd++;
    return 1;
}

int removeListaFinal(Lista *li) {
    if (li == NULL) return 0;
    if (li->qtd == 0) return 0;

    li->qtd--;
    return 1;
}

int removeListaInicio(Lista *li) {
    if (li == NULL) return 0;
    if (li->qtd == 0) return 0;

    int i;
    for (i=0; i<(li->qtd-1); i++) {
        li->dados[i] = li->dados[i+1];
    }

    li->qtd--;
    return 1;
}

int removeListaIndice(Lista *li, int indice) {
    if (li == NULL) return 0;
    if (li->qtd == 0) return 0;
    if (indice <= li->qtd) return 0;

    int i;
    for (i=indice; i<li->qtd-1; i++) {
        li->dados[i] = li->dados[i+1];
    }

    li->qtd--;
    return 1;
}

int removeListaDado(Lista *li, int dado) {
    if (li == NULL) return 0;
    if (listaVazia(li)) return 0;

    int i = 0;
    while (i<li->qtd && li->dados[i] != dado) {
        i++;
    }

    if (i == li->qtd) return 0;

    int k;
    for (k=i; k<(li->qtd-1); k++) {
        li->dados[i] = li->dados[i+1];
    }

    li->qtd--;
    return 1;
}

int obterListaIndice(Lista *li, int indice) {
    if (li == NULL) return -1;
    if (listaVazia(li)) return -1;
    if (indice >= li->qtd) return -1;

    return li->dados[indice];
}

int obterListaDado(Lista *li, int dado) {
    if (li == NULL) return -1;
    if (listaVazia(li)) return -1;
    
    int i=0;

    while (i<li->qtd && li->dados[i] != dado) {
        i++;
    }

    if (i == li->qtd) return -1;

    return i;
}