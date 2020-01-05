#include <stdio.h>

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(int argc, char **argv)
{
    int nb = 0;
    
    ft_ft(&nb);
    printf("%d", nb);
    return (0);
}
