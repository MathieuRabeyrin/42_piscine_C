#include <unistd.h>

int ft_strlen(char *str)
{
    int index = 0;
    
    for (; str[index] != '\0'; index++);
    return (index);
}

void ft_rev_params(int argc, char **argv)
{
    for (int i = argc - 1; i != 0; i--) {
        write(1, argv[i], ft_strlen(argv[i]));
        write(1, "\n", 1);   
    }
}

int main(int argc, char **argv)
{
    ft_rev_params(argc, argv);
    return (0);
}
