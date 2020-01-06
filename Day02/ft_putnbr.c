#include <unistd.h>

int intsize(int nb)
{
    int index = 0;
 
    if (nb < 0)
        nb = -nb;
    for (; nb > 0; index++)
        nb /= 10;
    return (index);
}
 
void ft_putnbr(int nb)
{
    int size = intsize(nb);
    int save = size;
    char str[size];
   
    if (nb == 0)
        write(1, "0", 1);
    if (nb < 0) {
        str[0] = '-';
        nb = -nb;
        save++;
    }else{
        size--;
    }
    for (int index = 0; nb > 0; size--) {
        str[size] = (nb % 10) + '0';
        nb /= 10;
    }
    write(1, str, save);
}

int main(int argc, char **argv)
{
    int nb = 42;
    
    ft_putnbr(nb);
    return (0);
}
