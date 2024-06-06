import random


def insertion_sort(l):
	for i in range(1, len(l)):
		j = i
		while j > 0 and l[j] < l[j-1]:
			l[j], l[j-1] = l[j-1], l[j]
			j -= 1
	return


def main():
    ## Não alterar o trecho de código abaixo
    n, k = map(int, input().strip().split())
    random.seed(48 + n + k)
    A = [random.randint(0, 2**48) for i in range(n)] 
    I = [random.randint(1, n) for i in range(k)]
    insertion_sort(I)
    ## Não alterar o trecho de código acima

    

if __name__ == "__main__":
    main()