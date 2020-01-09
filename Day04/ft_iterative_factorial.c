#include <stdio.h>
 
int ft_iterative_factorial(int nb)
{
    int result = 1;

    if (nb == 0)
        return (1);
    if (nb < 0)
        return (0);
    for (; nb > 0; nb--)
        result *= nb;
    return (result);
}
 
int main(int argc, char **argv)
{
    for (int nb = 0; nb < 11; nb++)
        printf("factorial of %d: %d\n", nb, ft_iterative_factorial(nb));
    return (0);
}
