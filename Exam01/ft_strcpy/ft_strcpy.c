#include <stdio.h>

char *ft_strcpy(char *s1, char *s2) //set s1 as dest, s2 as src, copy s2 to s1
{
    int i = 0;

    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

int main(void)
{
    char s1[] = "987654321";
    char s2[] = "123456789";
    printf("s1 before function : %s\n", s1);
    printf("s1 : %s\n", ft_strcpy(s1, s2));
    return (0);
}