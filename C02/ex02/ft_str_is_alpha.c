#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return 1;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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
	char str1[] = "jiale1211";
	char str2[] = "jiale";
	printf("String1 : %d\n", ft_str_is_alpha(str1));
	printf("String2 : %d\n", ft_str_is_alpha(str2));
	return (0);
}
