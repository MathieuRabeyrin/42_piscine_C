#include <stdio.h>

int ft_strlen(char *str)
{
    int index = 0;
    
    for (; str[index] != '\0'; index++);
    return (index);
}

int main(int argc, char **argv)
{
    char str[] = "Hello World";
    char length = ft_strlen(str);
    
    printf("%d", length);
    return (0);
}
