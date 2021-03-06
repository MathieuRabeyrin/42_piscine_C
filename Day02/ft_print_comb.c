#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}

void ft_print_comb(void)
{
    char left = '0';
    char mid = '1';
    char right = '2';
    
    for (; left <= '7';) {
        for (; mid <= '8';) {
            for (; right <= '9'; right++) {
                ft_putchar(left);
                ft_putchar(mid);
                ft_putchar(right);
                if (left != '7' || mid != '8' || right != '9') {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
            mid++;
            right = mid + 1;
        }
        left++;
        mid = left;
    }
}

int main(int argc, char **argv)
{
    ft_print_comb();
    return (0);
}
