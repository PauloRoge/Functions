#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 41

void vet_random(int* v, int tam);
void maior_menor(int* v, int tam, int* maior, int* menor);

int main(void) {

	srand((unsigned int)time(NULL));

	int a = 0;
	int b = 0;
	int vetor[MAX_SIZE];

	vet_random(vetor, MAX_SIZE);

	for (int i = 0; i < MAX_SIZE; i++)
		printf("%d ", vetor[i]);

	maior_menor(vetor, MAX_SIZE, &a, &b);

	printf("\nmaior: %d, menor: %d", a, b);
	return 0;
}

void vet_random(int* v, int tam) {

	for (int i = 0; i < tam; i++)
		v[i] = rand() % 100;
}

void maior_menor(int* v, int tam, int* maior, int* menor) {

	*maior = v[0];
	*menor = v[0];

	for (int i = 0; i < tam; i++)
		if (*maior < v[i])
			*maior = v[i];

	for (int i = 0; i < tam; i++)
		if (*menor > v[i])
			*menor = v[i];

}