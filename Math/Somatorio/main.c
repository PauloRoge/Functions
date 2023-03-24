#include <stdio.h>

int somatorioRecursivo(int n);
int somatorio(int n);


int main(void) {

	printf("%i", somatorio(5));
}

int somatorio(int n)
{
	int soma=0;
	for (int i = 0; i < n+1; i++)
		soma+= i;

	return soma;
}

int somatorioRecursivo(int n)
{
	if (n == 0)
		return 0;
	
	return n + somatorioRecursivo(n - 1);
}
