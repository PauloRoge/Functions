#include <stdio.h>

int SomaElementosVetor(int *v, int n);
int SomaVetorRecursivo(int v[], int n);
int main(void)
{
	int vetor[] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("%i", SomaVetorRecursivo(&vetor[0], 10));
	return 0;
}

int SomaElementosVetor(int *v, int n)
{
	int soma=0;
	for (int i = 0; i < n; i++)
		soma += v[i];

	return soma;
}

int SomaVetorRecursivo(int v[], int n)
{
	if(n == 0)
		return 0;

	return v[n-1]+SomaElementosVetor(v,n-1);
}