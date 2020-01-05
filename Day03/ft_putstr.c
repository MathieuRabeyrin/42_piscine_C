#include <unistd.h>

int ft_strlen(char *str)
{
    int index = 0;
    
    for (; str[index] != '\0'; index++);
    return (index);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putstr(char *str)
{
    //version 1
    write(1, str, ft_strlen(str));

    //version 2
    for (; *str != '\0'; *str++)
        ft_putchar(*str);
}

int main(int argc, char **argv)
{
    char str[] = "Hello World\n";
    
    ft_putstr(str);
    return (0);
}
