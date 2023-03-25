#include <stdio.h>

void selectSort(int* v, int N);
void trocaint(int* a, int* b);

int main() {

	int vetor[] = { 2,4,6,8,10,1,3,5,7,9 };

	selectSort(vetor, 10);
	for (int i = 0; i < 10; i++)
		printf("%i ", vetor[i]);

	return 0;
}

void selectSort(int* v, int N)
{
	for (int j = 0; j < N; j++)
		for (int i = j + 1; i < N; i++)
			if (v[i] < v[j]) // (<)crescente, (>)decrescente.
				trocaint(&v[i], &v[j]);
}

void trocaint(int* a, int* b)
{
	int aux = 0;

	aux = *a;
	*a = *b;
	*b = aux;
}