#include <stdio.h>

int ft_strlen(char *str)
{
    int index = 0;
    
    for (; str[index] != '\0'; index++);
    return (index);
}

char *ft_strrev(char *str)
{
    int i = 0;
    int j = ft_strlen(str) - 1;
    char save = 0;
    
    for (; i < j; i++) {
        save = str[i];
        str[i] = str[j];
        str[j] = save;
        j--;
    }
    return (str);
}

int main(int argc, char **argv)
{
    char str[] = "123456789";

    printf("Avant fonction : %s\n", str);
    ft_strrev(str);
    printf("Apres fonction : %s\n", str);
    return (0);
}
