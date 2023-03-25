#include <stdio.h>

int MaiorRecursivo(int* v, int n, int indice);
int Maior(int* v, int n);

int main(void) {
	int vetor[] = { 12,43,15,7,9,55,69,62,81,1 };

	printf("%i", MaiorRecursivo(vetor, 10, 0));

	return 0;
}

int Maior(int* v, int n) {
	int maior=0;

	for (int i = 0; i < n; i++)
		if (v[maior] >= v[i])
		maior = i;

	return maior;
		
}

int MaiorRecursivo(int* v, int n, int indice) {
	if (n == 0)
		return v[indice];

	if (v[n - 1] > v[indice])
		return MaiorRecursivo(v, n - 1, n - 1);
	else
		return MaiorRecursivo(v, n - 1, indice);
}