#include <stdio.h>
#include <math.h>
#include <stdlib.h> //para testar function. system

double bhaskara(double a, double b, double c, double* x1, double* x2);

int main() {

    double a = 0, b = 0, c = 0;
    double x1=0, x2=0;
    double delta = bhaskara(a, b, c, &x1, &x2);
    //-------------------------------------

    char parametro[3] = { 'a', 'b', 'c' };
    int continuar = 1;

    while (continuar==1)
    {
        system("cls");
        for (int i = 0; i < 3; i++)
        {
            printf("informe %c: ", i < 1 ? parametro[0] : i == 1 ? parametro[1] : parametro[2]);
            scanf_s(" %lf", i < 1 ? &a : i == 1 ? &b : &c);
        }
        delta = bhaskara(a, b, c, &x1, &x2);

        printf("\n\tx1 = %.2f\tx2 = %.2f\n\n", x1, x2);
        printf("Valor de delta: %.2f\n", delta);
        printf("\n\t(1)novamente (0)sair");

        continuar=getche();
    }
    
    return 0;
}

double bhaskara(double a, double b, double c, double* x1, double* x2) {
    double delta = b * b - 4 * a * c;

    if (delta < 0) // Não há raízes reais
        *x1 = *x2 = 0; // Atribui zero aos valores das raízes

    else if (delta == 0) // Há apenas uma raiz real
        *x1 = *x2 = -b / (2 * a);

    else { // Há duas raízes reais
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);
    }
    return delta;
}