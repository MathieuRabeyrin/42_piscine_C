#include <stdio.h>

int ft_atoi(char *str)
{
    int result = 0;
    int negative = 1;
    
    if (*str == '+' || *str == '-') {
        if (*str == '-')
            negative = -1;
        *str++;
    }
    for (; *str != '\0'; *str++) {
        if (*str >= '0' && *str <= '9') {
            result *= 10;
            result += *str - '0';
        }else {
            break;
        }
    }
    return (result * negative);
}

int main(int argc, char **argv)
{
    char str[] = "123456789";
    int result = 0;
    
    result = ft_atoi(str);
    printf("%d", result);
    return (0);
}
