#include <unistd.h>

int ft_strlen(char *str)
{
    int index = 0;
    
    for (; str[index] != '\0'; index++);
    return (index);
}

void ft_print_params(int argc, char **argv)
{
    for (int i = 1; i < argc; i++) {
        write(1, argv[i], ft_strlen(argv[i]));
        write(1, "\n", 1);   
    }
}

int main(int argc, char **argv)
{
    ft_print_params(argc, argv);
    return (0);
}
