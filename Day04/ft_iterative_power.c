#include <stdio.h>
 
int ft_iterative_power(int nb, int power)
{
    const int save = nb;
    int negative = 1;
    
    if (nb < 0) {
        nb = -nb;
        negative = -1;
    }
    if (power == 0)
        return (1 * negative);
    for (; power > 1; power--)
        nb *= save;
    return (nb * negative);
}
 
int main(int argc, char **argv)
{
    printf("%d\n", ft_iterative_power(2, 3));
    return (0);
}
