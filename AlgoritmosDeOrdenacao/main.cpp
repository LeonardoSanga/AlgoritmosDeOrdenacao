#include <iostream>
#include <chrono>

#define TAMANHO 7
#define TAMANHO2 30

#include "AlgoritmosDeOrdenacao.hpp"

using namespace std;
using namespace std::chrono;

void imprimeVetor(int vetor[], int tamanho) {

	int i;

	for (i = 0; i < tamanho; i++) {

		cout << " " << vetor[i] << " ";

		if ((i + 1) % 10 == 0) {

			cout << endl;

		}

	}

}

int main() {

	int* vetor = new int[TAMANHO];
	int vetorAux[TAMANHO] = {39, 12, 98, 1, 23, 67, 6};
	vetor = vetorAux;

	int* vetor2 = new int[TAMANHO2];
	int vetorAux2[TAMANHO2] = { 39, 12, 98, 1, 23, 67, 6, 19, 37, 87, 13, 45, 91, 40, 24, 66, 30, 109, 324, 235, 
		42, 901, 503, 2, 356, 124, 28, 59, 58, 1001 };
	vetor2 = vetorAux2;

	// Ordenando os vetores para a impressão
	bubbleSort(vetor, TAMANHO);
	bubbleSort(vetor2, TAMANHO2);

	cout << "Vetor 1 ordenado: " << endl;
	imprimeVetor(vetor, TAMANHO);

	cout << "\n\nVetor 2 ordenado: " << endl;
	imprimeVetor(vetor2, TAMANHO2);

	vetor = vetorAux;
	vetor2 = vetorAux2;
	
	// Ordenação por seleção

	auto comeco = steady_clock::now();
	selectionSort(vetor, TAMANHO);
	auto fim = steady_clock::now();

	auto tempo = fim - comeco;

	cout << "\nOrdenacao do vetor 1 por selecao:" << endl;
	cout << tempo.count() << "ns\n";
	cout << endl;

	comeco = steady_clock::now();
	selectionSort(vetor2, TAMANHO2);
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Ordenacao do vetor 2 por selecao:" << endl;
	cout << tempo.count() << "ns\n\n";
	cout << endl;

	vetor = vetorAux;
	vetor2 = vetorAux2;

	// Ordenação por troca

	comeco = steady_clock::now();
	bubbleSort(vetor, TAMANHO);
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Ordenacao do vetor 1 por troca:" << endl;
	cout << tempo.count() << "ns\n";
	cout << endl;

	comeco = steady_clock::now();
	bubbleSort(vetor2, TAMANHO2);
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Ordenacao do vetor 2 por troca:" << endl;
	cout << tempo.count() << "ns\n\n";
	cout << endl;

	vetor = vetorAux;
	vetor2 = vetorAux2;

	// Extra: Ordenação por inserção

	comeco = steady_clock::now();
	insertionSort(vetor, TAMANHO);
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "\nExtra:\n\nOrdenacao do vetor 1 por insercao:" << endl;
	cout << tempo.count() << "ns\n";
	cout << endl;

	comeco = steady_clock::now();
	insertionSort(vetor2, TAMANHO2);
	fim = steady_clock::now();

	tempo = fim - comeco;

	cout << "Ordenacao do vetor 2 por insercao:" << endl;
	cout << tempo.count() << "ns\n";
	cout << endl;

	return 0;
}