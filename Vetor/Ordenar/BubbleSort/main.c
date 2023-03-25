#include <stdio.h>

void bubbleSort(int* v, int N);
void trocaint(int* a, int* b);

main() {

	int vetor[] = { 2,4,6,8,10,1,3,5,7,9 };

	bubbleSort(vetor, 10);

	for (int i = 0; i < 10; i++)
		printf("%i ", vetor[i]);

	return 0;
}

void bubbleSort(int* v, int N)
{
	for (int j = N - 1; j > 0; j--)
		for (int i = 0; i < j; i++)
			if (v[i] > v[i + 1]) // (>) crescente, (<) decrescente
				trocaint(&v[i], &v[i + 1]);
}

void trocaint(int* a, int* b)
{
	int aux = 0;

	aux = *a;
	*a = *b;
	*b = aux;

}