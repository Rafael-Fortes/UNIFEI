import random, time


tamanho = int(input("Informe o tamanho do conjunto: "))
random.seed(tamanho)

start = time.time()
S = [random.randint(0, 2**17) for _ in range(tamanho)]
S = list(set(S))
S.sort()
end = time.time()

print(f"Tempo para gerar o conjunto: {end - start:.3f}")


alvo = random.randint(0, 2**17 // 2) * 2 + 1

start = time.time()
i, j = 0, len(S) - 1
pares = []

while i < j:
    if S[i] + S[j] == alvo:
        pares.append((S[i], S[j]))
        i += 1
        j -= 1
    elif S[i] + S[j] < alvo:
        i += 1
    else:
        j -= 1
end = time.time()

print(f"Tempo para encontrar a quantidade de pares (i, j): {end - start:.3f}")
print(f"quantidade de pares para lista de tamanho {tamanho}: {len(pares) // 2}")
