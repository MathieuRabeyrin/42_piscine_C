#include <stdio.h>

void ft_swap(int *a, int *b)
{
    //version 1;
    int c = 0;

    c = *a;
    *a = *b;
    *b = c;

    /*version 2 
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    */
}

int main(int argc, char **argv)
{
    int a = 1;
    int b = 2;
    
    printf("Valeur de A: %d ; Valeur de B: %d\n", a, b);
    ft_swap(&a, &b);
    printf("Valeur de A: %d ; Valeur de B: %d\n", a, b);
    return (0);
}
