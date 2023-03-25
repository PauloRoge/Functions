#include <stdio.h>
#include <math.h>

long long int potenciaint(int base, int expoente);
double potencia(double base, float expoente);
long long int potenciaRecursiva(int base, int expoente);

//------------------------------------------------------
int main(void) {

	int numero = 2;

	// function pronta = pow(x,y);  #include <math.h>

	printf("%lli", potenciaint(numero,63));
	//printf("%.7f", potencia(numero, 2));
	//printf("%lli\n", potenciaRecursiva(numero,4));

	return 0;
}
//------------------------------------------------------

long long int potenciaint(int base, int expoente)
{
	long long int p = 1;

	if (expoente)
		for (int i = 0; i < expoente; i++)
			p = p * base;

	return p;
}

double potencia(double base, float expoente)
{
	double p = 1, aux=0;

		aux = fabs(expoente);

		for (int i = 0; i < aux; i++)
			p = p * base;

		if (expoente < 0)
			return 1 / p;

	return p;
}

long long int potenciaRecursiva(int base, int expoente)
{
	if (expoente == 0)
		return 1;
	
	return base * potenciaRecursiva(base,expoente-1);
}