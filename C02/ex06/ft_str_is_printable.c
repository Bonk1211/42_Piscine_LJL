#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i = 0;

    if (str[0] == '\0')
        return 1;

    while (str[i] != '\0')
    {
        if ((str[i] >= 0 && str[i] <= 31) || (str[i] == 127))
        {
            return 0;
        }
        else
        {
            i++;
        } 
    }
    return 1;
}

int	main(void)
{
	char str1[] = "jiale\t";
	char str2[] = "JIALE";
    char str3[] = "";
	printf("String1 : %d\n", ft_str_is_printable(str1));
	printf("String2 : %d\n", ft_str_is_printable(str2));
    printf("String2 : %d\n", ft_str_is_printable(str3));
	return (0);
}