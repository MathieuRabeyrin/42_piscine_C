#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int mod = 0;

    mod = *a % *b;
    *a = *a / *b;
    *b = mod;
}

int main(int argc, char **argv)
{
    int a = 11;
    int b = 2;
    
    ft_ultimate_div_mod(&a, &b);
    printf("Quotient = %d ; Reste = %d", a, b);
    return (0);
}
