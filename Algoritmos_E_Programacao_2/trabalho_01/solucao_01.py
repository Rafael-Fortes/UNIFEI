import random, time


tamanho = int(input("Informe o tamanho do conjunto: "))
random.seed(tamanho)

l = set()

start = time.time()
while len(l) < tamanho:
    num = random.randint(0, 2**17)
    l.add(num)
end = time.time()

print(f"Tempo para gerar o conjunto: {end - start:.3f}")

alvo = random.randint(0, 2**17)
while alvo % 2 == 0:
    alvo = random.randint(0, 2**17)

start = time.time()
contador = 0
for i in l:
    j = alvo - i
    if j in l and j != i:
        contador += 1
end = time.time()

print(f"Tempo para encontrar a quantidade de pares (i, j): {end - start:.3f}")
print(f"quantidade de pares para lista de tamanho {tamanho}: {contador // 2}")