#include <stdio.h>

long long int fatorial(int n);
long long int fatorialRecursivo(int n);

int main(void)
{
	printf("%lli", fatorial(5));
}

long long int fatorial(int n)
{
	int resultado=n;
	int i=1;

	for (i = 1; i < n; i++)
		resultado*= i;

	return resultado;
}

long long int fatorialRecursivo(int n)
{
	if (n == 2)
		return 2;

	return n * fatorialRecursivo(n - 1);
}