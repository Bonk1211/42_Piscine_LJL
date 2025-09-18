#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

int main(void)
{
    char src[10];
    char dest[10];
    ft_strcpy(dest, "123456789");
    printf("%s\n", dest);
    return (0);
}



// int main()
// {
//     char src[10] = "123456789";

//     char dest1[50];
//     strcpy(dest1, src); //will copy from src to dest1
//     printf("dest 1 : %s\n", dest1);

//     char dest2[50];
//     strncpy(dest2, src, 6);
//     dest2[6] = '\0';
//     printf("dest2 : %s\n", dest2);

//     return(0);
// }