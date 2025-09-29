/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limjiale <limjiale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:33:41 by limjiale          #+#    #+#             */
/*   Updated: 2025/09/30 02:43:28 by limjiale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 2)
    {
		while (av[1][i])
		{
			if (av[1][i] >= 'a' && av[1][i] <= 'z')
			{
				av[1][i] -= 32;
                ft_putchar(av[1][i]);
			}
			else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
			{
				av[1][i] += 32;
                ft_putchar(av[1][i]);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
    }
	ft_putchar('\n');
	return (0);
}