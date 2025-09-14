#include <stdio.h>

int ft_strlen(char *str)
{
    size_t length = 0;
    while (*str != '\0')
    {
        str++;
        length++;
    }
    return (length);
}

int main(void)
{
    char TempS[] = "Hello world";
    int count = ft_strlen(TempS);
    printf("The number of character is : %d", count);
    return (0);
}