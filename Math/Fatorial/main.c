#include <stdio.h>

long long int fatorial(int n);
long long int fatorialRecursivo(int n);

int main(void)
{
	int numero = 10;

	printf("%lli", fatorialRecursivo(4));
}

long long int fatorial(int n)
{
	if (n == 0)
		return 0;

	return n + fatorial(n - 1);
}

long long int fatorialRecursivo(int n)
{
	if (n == 2)
		return 2;

	return n * fatorialRecursivo(n - 1);
}