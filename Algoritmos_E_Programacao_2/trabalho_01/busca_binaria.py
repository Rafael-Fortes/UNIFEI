import random


def partition(first, last, lista):
    # sorteia um índice para o pivot
    pivotIndex = random.randint(first, last)

    # troca o indice sorteado com o primeiro elemento
    lista[first], lista[pivotIndex] = lista[pivotIndex], lista[first]

    # inicializa o pivot como o primeiro elemento
    pivot = lista[first]

    maiores_pivot = first + 1
    atual = first + 1

    # enquanto atual não chegar ao final da lista
    while atual <= last:
        # se o elemento atual for menor que o pivot, troca ele com o primeiro elemento maior que o pivot
        if lista[atual] < pivot:
            lista[maiores_pivot], lista[atual] = lista[atual], lista[maiores_pivot]
            # incrementa o índice do primeiro elemento maior que o pivot
            maiores_pivot = maiores_pivot + 1
        atual = atual + 1

    # troca o pivot com o último elemento menor que ele
    lista[first], lista[maiores_pivot - 1] = lista[(maiores_pivot - 1)], lista[first]

    # retorna o índice do pivot
    return maiores_pivot - 1


def quicksort(first, last, lista):
    # se a lista tiver um elemento ou menos, ela já está ordenada
    if last - first <= 0:
        return lista
    # separa a lista em duas partes
    pivotIndex = partition(first, last, lista)
    # ordena a parte maior que o pivot
    quicksort(first, pivotIndex - 1, lista)
    # ordena a parte menor que o pivot
    quicksort(pivotIndex + 1, last, lista)

    return lista


def binarySearch(alvo, lista):
    # inicializa os índices
    left = 0
    right = len(lista) - 1
    # enquanto a lista não estiver vazia
    while left <= right:
        # calcula o índice do meio. Se o elemento do meio for o alvo, retorna 1. Se não, reduz a lista pela metade e continua a busca
        meio = (left + right) // 2
        if lista[meio] == alvo:
            return 1
        elif lista[meio] < alvo:
            left = meio + 1
        else:
            right = meio - 1
    # se o alvo não estiver na lista, retorna 0
    return 0


# gera uma lista de tamanho n com números aleatórios
tamanho = 48000
random.seed(tamanho)
l = []
while len(l) < tamanho:
    num = random.randint(0, 2**17)
    if num not in l:
        l.append(num)

# gera um número alvo ímpar
alvo = random.randint(0, 2**17)
while alvo % 2 == 0:
    alvo = random.randint(0, 2**17)

# conta quantos pares de números na lista somam alvo
contador = 0
quicksort(0, len(l) - 1, l)
for i in l:
    if i > alvo / 2:
        break
    res = 0
    compl = alvo - i
    res = binarySearch(compl, l)
    if res == 1:
        contador = contador + 1

print(int(contador))