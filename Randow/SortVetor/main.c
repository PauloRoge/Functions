#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 20

void VetRand(int* v, int n);

int main() {
	int vetor[tam];
	srand(time(NULL)); // inicializa o gerador de números aleatórios

	VetRand(vetor, tam);

	for (int i = 0; i < tam; i++)
		printf("%d ", vetor[i]);

	return 0;
}

void VetRand(int* v, int n)
{
	for (int i = 0; i < n; i++)
		v[i] = rand() % 21;
}