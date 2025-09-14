#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    if (b != 0)
    {
        int tempa;
        int tempb;
        tempa = *a / *b;
        tempb = *a % *b;
        *a = tempa;
        *b = tempb;
    }
}

int main(void)
{
    int tempa = 13;
    int tempb = 5;
    int *a = &tempa;
    int *b = &tempb;

    ft_ultimate_div_mod(a, b);

    printf("div : %d\n", *a);
    printf("mod : %d\n", *b);
    return (0);
}