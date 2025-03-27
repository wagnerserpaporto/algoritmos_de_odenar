# algoritimos de ordenação
Bubble Sort (Ordenação por bolha):

Descrição: O algoritmo compara elementos adjacentes e os troca de lugar se estiverem na ordem errada. Esse processo se repete até que a lista esteja ordenada.

Complexidade: O(n²) no pior caso.

Vantagens: Simples de entender e implementar.

Desvantagens: Ineficiente para listas grandes.

Selection Sort (Ordenação por seleção):

Descrição: O algoritmo seleciona o menor (ou maior) elemento da lista e o coloca na posição correta. Esse processo é repetido para o restante da lista.

Complexidade: O(n²) no pior caso.

Vantagens: Simples e fácil de entender.

Desvantagens: Também ineficiente para listas grandes.

Insertion Sort (Ordenação por inserção):

Descrição: O algoritmo percorre a lista, pegando um elemento por vez e inserindo-o na posição correta da parte já ordenada da lista.

Complexidade: O(n²) no pior caso.

Vantagens: Eficiente para listas pequenas ou quase ordenadas.

Desvantagens: Ineficiente para listas grandes.

Merge Sort (Ordenação por intercalação):

Descrição: O algoritmo divide recursivamente a lista em duas metades até que cada sublista tenha um único elemento, depois intercala essas sublistas de forma ordenada.

Complexidade: O(n log n) em todos os casos.

Vantagens: Muito eficiente para listas grandes.

Desvantagens: Exige espaço adicional devido à divisão da lista.

Quick Sort (Ordenação rápida):

Descrição: O algoritmo escolhe um pivô e reorganiza a lista em dois subgrupos: um com elementos menores que o pivô e outro com elementos maiores. Depois, repete-se o processo para cada subgrupo.

Complexidade: O(n log n) no melhor caso, O(n²) no pior caso.

Vantagens: Muito eficiente na prática, especialmente para listas grandes.

Desvantagens: Pode ser ineficiente no pior caso (com um pivô mal escolhido).

Heap Sort (Ordenação por montículo):

Descrição: O algoritmo usa uma estrutura de dados chamada "heap" (montículo) para ordenar a lista. A lista é reorganizada em uma árvore binária de heap, depois o maior (ou menor) elemento é extraído e colocado na posição final.

Complexidade: O(n log n) no pior caso.

Vantagens: Garantia de desempenho O(n log n) no pior caso.

Desvantagens: Mais complexo e requer estrutura de dados adicional.

Radix Sort (Ordenação por base):

Descrição: O algoritmo ordena os números digitando-os por cada dígito, começando pelo menos significativo até o mais significativo, usando um algoritmo de ordenação estável (geralmente Counting Sort).

Complexidade: O(nk), onde n é o número de elementos e k é o número de dígitos.

Vantagens: Pode ser muito eficiente para números inteiros ou strings curtas.

Desvantagens: Não é comparativo, e não funciona bem com números muito grandes ou com números com muitos dígitos.

Counting Sort (Ordenação por contagem):

Descrição: O algoritmo usa uma matriz de contagem para contar a frequência de cada valor e depois calcula as posições finais dos elementos.

Complexidade: O(n + k), onde n é o número de elementos e k é o valor máximo.

Vantagens: Muito eficiente quando os números estão em um intervalo limitado.

Desvantagens: Ineficiente quando os valores são muito dispersos ou muito grandes.

Bucket Sort (Ordenação por baldes):

Descrição: O algoritmo divide os elementos em "baldes", ordena esses baldes individualmente (geralmente usando outro algoritmo de ordenação) e depois concatena os baldes.

Complexidade: O(n + k), onde n é o número de elementos e k é o número de baldes.

Vantagens: Eficiente quando os dados estão distribuídos de maneira uniforme.

Desvantagens: Requer conhecimento prévio sobre os dados para escolher um bom número de baldes.
