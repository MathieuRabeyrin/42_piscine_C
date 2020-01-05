#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}

void ft_is_negative(int n)
{
    if (n < 0) {
        ft_putchar('N');
    } else {
        ft_putchar('P');
    }
}

int main(int argc, char **argv)
{
    int nb_positive = 1;
    int nb_negative = -1;
    
    ft_is_negative(nb_positive);
    ft_putchar('\n');
    ft_is_negative(nb_negative);
    return (0);
}
