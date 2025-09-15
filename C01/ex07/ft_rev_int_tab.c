#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int temp;
    int start = 0;
    int end = size -1;
    while (start < end) //stops when start =3 end =2
    {
        temp = tab[start];
        tab[start] = tab[end];
        tab[end] = temp;
        start++;
        end--;
    }
    
}

int main(void)
{
    int str[] = {0, 1, 2, 3, 4, 5};
    int size;
    int i;

    size = 6;
    i = 0;
    ft_rev_int_tab(str, size); //done with the swaping
    while (i < size) //print until i > size
    {
        printf("%d", str[i]);
        i++;
    }
    return (0);
}