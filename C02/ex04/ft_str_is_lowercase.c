#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i = 0;
    if (str[0] == '\0')
    {
        return 1;
    }

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
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
	char str2[] = "jiaLe";
	printf("String1 : %d\n", ft_str_is_lowercase(str1));
	printf("String2 : %d\n", ft_str_is_lowercase(str2));
	return (0);
}