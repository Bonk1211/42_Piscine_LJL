#include <stdio.h>

void ft_sort_int_tab(int *tab, int size)
{
    int temp;
    int i = 0;
    int j;

    while (i < size - 1)
    {
        j = 0;
        while (j < size - i - 1)
        {
                if (tab[j] > tab[j+1])
            {
                temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
            j++;
        }
    i++;
    }
    
}

int main(void)
{
    int str[] = {2, 4, 1, 0, 3};
    int size = sizeof(str) / sizeof(str[0]);
    int i;
    
    ft_sort_int_tab(str, size);
    i = 0;
    while (i < size)
    {
        printf("%d", str[i]);
        i++;
    }
    return (0);
}