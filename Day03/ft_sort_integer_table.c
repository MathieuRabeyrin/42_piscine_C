#include <stdio.h>

void ft_sort_integer_table(int *tab, int size)
{
    int save = 0;
    int j = size - 1;
    
    for (int i = size - 1; i >= 0;) {
        for (; j >= 0; j--) {
            if (tab[j] > save) {
                save = tab[j];
                tab[j] = tab[i];
                tab[i] = save;
            }
        }
        i--;
        j = i;
        save = 0;
    }
}

int main(int argc, char **argv)
{
    int str[9] = {1, 2, 0, 0, 4, 8, 7, 8, 9};

    ft_sort_integer_table(str, 9);
    for (int i = 0; i < 9; i++)
        printf("%d", str[i]);
    return (0);
}
