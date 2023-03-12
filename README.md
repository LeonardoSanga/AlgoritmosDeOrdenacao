# AlgoritmosDeOrdenacao
Projeto desenvolvido com o intuito de aplicar os conhecimentos adquiridos acerca de algoritmos de ordenação, sendo eles Selection Sort, Bubble Sort e Insertion Sort.

## Comparação do Desempenho dos algoritmos de Ordenação por Seleção e por Troca em termos de tempo de execução
Pensando no número de verificações (condições ifs) como fator
determinante da complexidade de tempo, no algoritmo de ordenação por
troca, no pior caso, teremos que a cada loop externo (n loops no total, sendo
n o número de elementos do vetor), n-1 loops internos serão realizados, logo,
n.(n - 1), (n² - n) verificações serão feitas. A partir disso, pode-se concluir que
a complexidade de tempo desse algoritmo, utilizando a notação O, equivale a
O(n²). Já para o algoritmo de ordenação por seleção, a cada percorrida do
loop externo (x), percorremos (n - x) vezes o loop interno. A partir disso,
também chega-se a uma complexidade de O(n²) para esse algoritmo. Embora
os dois algoritmos possuam a mesma notação O, possuindo a mesma
complexidade de tempo para o pior caso, eles apresentam diferenças em
relação ao melhor caso e caso médio, sendo que a ordenação por seleção
apresenta a mesma quantidade de operações (verificações)
independentemente do caso, enquanto que para a ordenação por troca
(estando esse algoritmo melhorado) o número de operações é diferente de
acordo com a quantidade de trocas necessárias para ordenar o vetor, sendo
que para um vetor semi-ordenado, menos operações são necessárias.

## Print da execução do teste dos Algoritmos de Ordenação
![image](https://user-images.githubusercontent.com/100099053/224519118-f9a5a037-6e6a-48d2-9487-7bafb59cbd27.png)
