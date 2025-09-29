/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limjiale <limjiale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:12:10 by limjiale          #+#    #+#             */
/*   Updated: 2025/09/30 02:31:59 by limjiale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}

int main (int ac, char **av)
{
    int i;

    if (ac != 4)
    {
        ft_putchar('\n');
        return (1);
    }
    
    if (av[2][1] != '\0' && av[3][1] != '\0' )
    {
        ft_putchar('\n');
        return (1);
    }

    i = 0;
    while (av[1][i])
    {
        if (av[2][0] == av[1][i])
        {
            av[1][i] = av[3][0];
        }
        i++;
    }
    i = 0;
    while (av[1][i])
    {
        ft_putchar(av[1][i]);
        i++;
    }
    ft_putchar('\n');
    return (0);
}