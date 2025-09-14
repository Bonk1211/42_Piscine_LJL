#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main(void)
{
    int *a;
    int *b;

    int int_a;
    int int_b;

    int_a = 20;
    int_b = 10;

    a = &int_b;
    b = &int_a;
    ft_swap(a, b);
    printf("%d\n", int_a);
    printf("%d\n", int_b);
   
    return (0);
}