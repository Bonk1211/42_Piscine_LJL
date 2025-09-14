#include <stdio.h>

void ft_ft(int *nbr) //act as a pointer
{
    *nbr = 42;
}

int main(void)
{
    int *nbr;
    int my_int;

    my_int = 24;
    nbr = &my_int;
    ft_ft(nbr);
    printf("%d\n", my_int);
    return (0);
}