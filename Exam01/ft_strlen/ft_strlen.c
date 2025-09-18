#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    str[i] = '\0';
    int n = i;
    return n;
}

int main(void)
{
    int i;
    char str[10] = "jiale1211";
    printf("%d\n", ft_strlen(str));
    return (0);
}