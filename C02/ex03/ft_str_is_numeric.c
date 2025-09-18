#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i = 0;

    if (str[0] == '\0')
        return 1;

    while (str[i] != '\0' )
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            i++;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int	main(void)
{
	char str1[] = "1211";
	char str2[] = "";
	printf("String1 : %d\n", ft_str_is_numeric(str1));
	printf("String2 : %d\n", ft_str_is_numeric(str2));
	return (0);
}