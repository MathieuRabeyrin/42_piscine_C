#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(int argc, char **argv)
{
    int a = 11;
    int b = 2;
    int div = 0;
    int mod = 0;
    
    ft_div_mod(a, b, &div, &mod);
    printf("Quotient = %d ; Reste = %d", div, mod);
    return (0);
}
