import random, time


if __name__ == "__main__":
    tamanho = int(input("Informe o tamanho do conjunto: "))
    random.seed(tamanho)

    l = []

    start = time.time()
    while len(l) < tamanho:
        num = random.randint(0, 2**17)
        if num not in l:
            l.append(num)
    end = time.time()
    print(f"Tempo para gerar o conjunto: {end - start:.3f}")

    alvo = random.randint(0, 2**17)
    while alvo % 2 == 0:
        alvo = random.randint(0, 2**17)

    start = time.time()
    contador = 0
    for i in l:
        compl = alvo - i
        if compl in l:
            contador = contador + 1
    end = time.time()

    print(f"Tempo para encontrar a quantidade de pares (i, j): {end - start:.3f}")
    print(f"quantidade de pares para lista de tamanho {tamanho}: {contador // 2}")
