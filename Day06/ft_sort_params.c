#include <unistd.h>

int ft_strlen(char *str)
{
    int index = 0;
    
    for (; str[index] != '\0'; index++);
    return (index);
}

int ft_strcmp(const char *s1, const char *s2)
{
    for (; *s1 != '\0' || *s2 != '\0';) {
        if (*s1 != *s2)
            return (*s1 - *s2);
        *s1++;
        *s2++;
    }
    return (0);
}
 
void ft_sort_params(int argc, char **argv)
{
    int j = 1;
    char *temp = NULL;
   
    for (int i = 1; i < argc - 1;) {
        for (; j < argc - 1; j++) {
            if (ft_strcmp(argv[j], argv[j + 1]) > 0) {
                temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
        i++;
        j = 1;
    }
}
 
void display(int argc, char **argv)
{
    for (int i = 1; i < argc; i++) {
        write(1, argv[i], ft_strlen(argv[i]));
        write(1, "\n", 1);
    }
}
 
int main(int argc, char **argv)
{
    ft_sort_params(argc, argv);
    display(argc, argv);
    return (0);
}
