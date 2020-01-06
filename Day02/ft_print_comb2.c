#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}

void ft_print_comb2(void)
{
    char units = '0';
    char tens = '0';
    char hundreds = '0';
    char thousands = '0';
    
    for (; thousands != ':';) {
        for (; hundreds != ':';) {
            for (; tens < ':';) {
                for (; units < ':'; units++) {
                    ft_putchar(thousands);
                    ft_putchar(hundreds);
                    ft_putchar(' ');
                    ft_putchar(tens);
                    ft_putchar(units);
                    if (thousands != '9' || hundreds != '8' || tens != '9' || units != '9') {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
                tens++;
                units = '0';
            }
            hundreds++;
            tens = thousands;
            units = hundreds + 1;
        }
        thousands++;
        hundreds = '0';
        tens = thousands;
        units = hundreds + 1;
    }
}

int main(int argc, char **argv)
{
    ft_print_comb2();
    return (0);
}
