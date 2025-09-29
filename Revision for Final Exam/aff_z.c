#include <unistd.h>

int	letter_count(char c)
{
	if (c >= 'A' && c <= 'a')
		return (c - 'A' + 1);
	else if (c >= 'a' && c <= 'z')
		return ( c - 'a' + 1);
	else
		return (1);
}

int	main(int ac, char **av)
{
	int repeat;
	int i;

	i = 0;
	if (ac == 2)
		while (av[1][i])
		{
			while (repeat--)
			{
				write (1, &av[1][i], 1);
			}
		i++;	
		}
		write (1, '\n', 1);
		return (0);
}