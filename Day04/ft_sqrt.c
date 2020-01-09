#include <stdio.h>
 
int ft_sqrt(int nb)
{
    const int save = nb;
   
    for (; nb > 0; nb--) {
        if ((save / nb) == nb)
            if ((nb * nb) == save)
                return (nb);
    }
    return (0);
}
 
int main(int argc, char **argv)
{
    int result = ft_sqrt(36);
   
    printf("%d\n", result);
    return (0);
}
