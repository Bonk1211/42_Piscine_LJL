#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i = 0;
    if (str[0] == '\0')
    {
        return 1;
    }

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
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
	char str1[] = "jiale";
	char str2[] = "JIALE";
	printf("String1 : %d\n", ft_str_is_uppercase(str1));
	printf("String2 : %d\n", ft_str_is_uppercase(str2));
	return (0);
}