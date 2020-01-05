#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(int argc, char **argv)
{
    int nb = 0;
    int *ptr1 = NULL;
    int **ptr2 = NULL;
    int ***ptr3 = NULL;
    int ****ptr4 = NULL;
    int *****ptr5 = NULL;
    int ******ptr6 = NULL;
    int *******ptr7 = NULL;
    int ********ptr8 = NULL;
    
    ptr1 = &nb;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    
    ft_ultimate_ft(&ptr8);
    printf("%d", nb);
    return (0);
}
