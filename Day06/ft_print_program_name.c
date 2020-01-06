#include <unistd.h>

int ft_strlen(char *str)
{
    int index = 0;
    
    for (; str[index] != '\0'; index++);
    return (index);
    
}

void ft_print_program_name(int argc, char **argv)
{
    write(1, argv[0], ft_strlen(argv[0]));
}

int main(int argc, char **argv)
{
    ft_print_program_name(argc, argv);
    return (0);
}
