#include "AlgoritmosDeOrdenacao.hpp"

// Algoritmo de ordenação por seleção

void selectionSort(int v[], int n) {

	int aux, min;

	for (int i = 0; i < n; i++) {

		min = i;

		for (int j = i + 1; j < n; j++) {

			if (v[min] > v[j]) {

				min = j;

			}

		}

		aux = v[min];

		v[min] = v[i];
		v[i] = aux;

	}

}

// Algoritmo de ordenação por troca

void bubbleSort(int v[], int n) {

	int aux, min, contador;

	for (int i = 0; i < n; i++) {

		contador = 0;

		for (int j = 1; j < n; j++) {

			if (v[j - 1] > v[j]) {

				aux = v[j];

				v[j] = v[j - 1];
				v[j - 1] = aux;

			}
			else {

				contador++;

			}

		}

		if (contador == n - 1) {

			return;

		}

	}

}

// Extra: Algoritmo de ordenação por inserção

void insertionSort(int v[], int n) {

	int aux;
	int j;

	for (int i = 0; i < n; i++) {

		aux = v[i];

		for (j = i; (j > 0) && (aux < v[j - 1]); j--) {

			v[j] = v[j - 1];

		}

		v[i] = v[j];

	}

}