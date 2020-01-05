#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}

void ft_print_reverse_alphabet(void)
{
    for (char i = 'z'; i >= 'a'; i--)
        ft_putchar(i);
}

int main(int argc, char **argv)
{
    ft_print_reverse_alphabet();
    return (0);
}
