#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
    if (b != 0)
    {
        *div = a / b; //quotient = 2
        *mod = a % b; //remainder = 3
    }
}

int main(void)
{
    int a = 13;
    int b = 5;
    int *div = &a; //Store the address of a
    int *mod = &b;

    printf("a = %d\n", *div);
    printf("b = %d\n", *mod);
    ft_div_mod(a, b, div, mod); //after the function , it store the address of a/b
    printf("a/b = %d\n", *div);
    printf("a\%%b = %d\n", *mod);
    return (0);
}