#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
    const int save = nb;
    int negative = 1;

    if (nb < 0) {
        nb = -nb;
        negative = -1;
    }
    if (power < 0)
        return (0);
    if (power == 0)
        return (1 * negative);
    if (power == 1)
        return (nb);
    return (nb = ft_recursive_power(nb, power - 1) * save);
}
 
int main(int argc, char **argv)
{
    printf("%d\n", ft_recursive_power(2, 3));
    return (0);
}
