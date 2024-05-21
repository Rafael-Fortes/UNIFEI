class TreeNode:
    def __init__(self, key):
        self.key = key
        self.left = None
        self.right = None

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def insert(self, key):
        if self.root is None:
            self.root = TreeNode(key)
        else:
            self._insert_recursive(self.root, key)

    def _insert_recursive(self, node, key):
        if key < node.key:
            if node.left is None:
                node.left = TreeNode(key)
            else:
                self._insert_recursive(node.left, key)
        elif key > node.key:  # Evita duplicatas
            if node.right is None:
                node.right = TreeNode(key)
            else:
                self._insert_recursive(node.right, key)

    def search(self, key):
        return self._search_recursive(self.root, key)

    def _search_recursive(self, node, key):
        if node is None or node.key == key:
            return node
        if key < node.key:
            return self._search_recursive(node.left, key)
        else:
            return self._search_recursive(node.right, key)

def count_pairs_with_sum(bst, S, k):
    count = 0
    seen = set()

    for num in S:
        complement = k - num
        if complement != num and complement not in seen and bst.search(complement):
            count += 1
            seen.add(num)
            seen.add(complement)
    
    return count

# Exemplo de uso:
import random

tamanho = int(input("Digite o tamanho do conjunto S: "))
random.seed(tamanho)

bst = BinarySearchTree()
S = []

while len(S) < tamanho:
    num = random.randint(0, 2**17)
    if not bst.search(num):  # Evita duplicatas
        bst.insert(num)
        S.append(num)

alvo = random.randint(0, 2**17)
while alvo % 2 == 0:
    alvo = random.randint(0, 2**17)


# Contando os pares
resultado = count_pairs_with_sum(bst, S, alvo)
print("Número de pares (i, j) onde i + j =", alvo, ":", resultado)
