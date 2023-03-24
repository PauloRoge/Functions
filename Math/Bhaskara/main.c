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

    for (int i = 0; i < 3; i++)
    {
        printf("informe %c: ", i < 1 ? parametro[0] : i == 1 ? parametro[1] : parametro[2]);
        scanf_s(" %lf", i < 1 ? &a : i == 1 ? &b : &c);
    }
    system("cls");

    delta = bhaskara(a, b, c, &x1, &x2);

    printf("Raizes da equacao %.2fx^2 + %.2fx + %.2f:\n", a, b, c);
    printf("\n\tx1 = %.2f\tx2 = %.2f\n\n", x1, x2);
    printf("Valor de delta: %.2f\n", delta);
    return 0;
}

double bhaskara(double a, double b, double c, double* x1, double* x2) {
    double delta = b * b - 4 * a * c;

    if (a == 0)// Verifica se a é zero para evitar divisão por zero, se a=0 não é 2 grau.
    {
        *x1 = *x2 = 0;// Atribui zero aos valores das raízes
        return 0;// colocar NULL
    }
       

    if (delta < 0) { // Não há raízes reais
        *x1 = *x2 = 0; // Atribui zero aos valores das raízes
    }
    else if (delta == 0) { // Há apenas uma raiz real
        *x1 = *x2 = -b / (2 * a);
    }
    else { // Há duas raízes reais
        *x1 = (-b + sqrt(delta)) / (2*a);
        *x2 = (-b - sqrt(delta)) / (2*a);
    }
    return delta;
}