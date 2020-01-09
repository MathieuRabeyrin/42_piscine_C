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
 
int ft_find_next_prime(int nb)
{
    int save = nb;
    int result = ft_is_prime(nb);

    if (save < 2)
        return (2);
    if (result == 0) {
        for (; ft_is_prime(save) == 0; save++);
    }
    return (save);
}
 
int main(int argc, char **argv)
{
    int result = ft_find_next_prime(32);

    printf("%d\n", result);
    return (0);
}
