#include <stdio.h>
 
int ft_is_prime(int nb)
{
    const int save = nb;
 
    if (nb < 2)
    return (0);
    for (; nb > 0; nb--) {
        if ((save % nb) == 0 && nb != save && nb != 1)
            return (0);
    }
    return (1);
}
 
int main(int argc, char **argv)
{
    int result = ft_is_prime(2);
 
    printf("%d\n", result);
    return (0);
}
