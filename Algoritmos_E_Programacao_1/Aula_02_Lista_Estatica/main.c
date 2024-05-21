#include <stdio.h>
#include <stdlib.h>

#include "listaEstatica.h"

int criar_dado(int *dado);

int main(void) {
	Lista *li = NULL;
	int opcao, dado, ok, pos;

	do {
		printf("\n\nMenu de opções");
		printf("\n1 - Criar lista");
		printf("\n2 - Liberar lista");
		printf("\n3 - Inserir elemento no início");
		printf("\n4 - Inserir elemento no final");
		printf("\n5 - Inserir elemento (ordenado)");
		printf("\n6 - Remover elemento do início");
		printf("\n7 - Remover elemento do final");
		printf("\n8 - Remover elemento (qualquer)");
		printf("\n9 - Buscar elemento pela posição");
		printf("\n10 - Buscar elemento pelo dado");
		printf("\n11 - Imprimir lista");
		printf("\n12 - Sair");
		printf("\nOpção: ");
		scanf("%d", &opcao);

		switch (opcao) {
		case 1: // Criar Lista
			li = criarLista();

			if (li != NULL) {
				printf("\n Lista criada com sucesso!");
			} else {
				printf("\n Lista não criada!");
			}
			break;

		case 2: // Liberar Lista
			ok = liberarLista(li);
			li = NULL;

			if (ok) {
				printf("\n Lista liberada com sucesso!");
			} else {
				printf("\n Lista não liberada!");
			}
			break;

		case 3: // inserir elemento no início
			ok = criar_dado(&dado);
			ok = insereListaInicio(li, dado);

			if (ok == 1) {
				printf("\n Inserção realizada com sucesso!");
			} else {
				printf("\n Falha na inserção!");
			}

			break;

		case 4: // inserir elemento no final
			ok = criar_dado(&dado);
			ok = insereListaFinal(li, dado);

			if (ok == 1) {
				printf("\n Inserção realizada com sucesso!");
			} else {
				printf("\n Falha na inserção!");
			}

			break;

		case 5: // inserir elemento de forma ordenada
			ok = criar_dado(&dado);
			ok = insereListaOrdenada(li, dado);

			if (ok == 1) {
				printf("\n Inserção realizada com sucesso!");
			} else {
				printf("\n Falha na inserção!");
			}

			break;

		case 6: // remover elemento do início
			ok = removeListaInicio(li);

			if (ok == 1) {
				printf("\n Remoção realizada com sucesso!");
			} else {
				printf("\n Falha na remoção!");
			}
			break;

		case 7: // remover elemento do final
			ok = removeListaFinal(li);

			if (ok == 1) {
				printf("\n Remoção realizada com sucesso!");
			} else {
				printf("\n Falha na remoção!");
			}
			break;

		case 8: // remover elemento do meio
			printf("\n Número a ser removido: ");
			scanf("%d", &dado);

			ok = removeListaDado(li, dado);

			if (ok == 1) {
				printf("\n Remoção realizada com sucesso!");
			} else {
				printf("\n Falha na remoção!");
			}
			break;

		case 9: // busca elemento pela posicao
			printf("\n Posição do elemento a ser buscado: ");
			scanf("%d", &pos);

			ok = obterListaIndice(li, pos);

			if (ok) {
				printf("\n Busca realizada com sucesso!");
				printf("\n Elemento da %dª posição: ", pos);
				printf("%d", ok);
			} else {
				printf("\n Posição não existe!");
			}

			break;

		case 10: // busca elemento pelo dado
			printf("\n Código do produto a ser buscado: ");
			scanf("%d", &dado);

			ok = obterListaDado(li, dado);

			if (ok) {
				printf("\n Busca realizada com sucesso!");
				printf("\n Elemento da %dª posição: ", ok);
				printf("%d", dado);
			} else {
				printf("\n Elemento não encontrado!");
			}

			break;

		case 11: // imprime a lista
			printf("\n Lista encadeada: ");
			imprimirLista(li);

			break;

		case 12: // libera memória e finaliza programa
			liberarLista(&li);
			printf("\nFinalizando...");
			break;

		default:
			printf("\nOpção inválida!");
			break;
		}

	} while (opcao != 12);

	return 0;
}

int criar_dado(int *dado) {
	printf("\nDigite um valor: ");
	scanf("%d", dado);

	return 1;
}