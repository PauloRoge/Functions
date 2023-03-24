#include <stdio.h>

int fatorial(int n);

int main(void)
{
	int numero = 10;

	printf("%d", fatorial(10));
}

fatorial(int n)
{
	if (n == 0)
		return 0;

	return n + fatorial(n - 1);
}