#include <stdio.h>

void BinDec(long long* num);  // converte o número binário para decimal

int main() {
    long long num=101011;
    
    BinDec(&num);

    printf("%lli\n", num);

    return 0;
}
void BinDec(long long* bin)
{
    int decimal = 0, base = 1, resto;
   
    while (*bin > 0) {
        resto = *bin % 10;
        decimal += resto * base;
        *bin /= 10;
        base *= 2;
    }
    *bin = decimal;

}