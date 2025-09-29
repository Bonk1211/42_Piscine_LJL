/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limjiale <limjiale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 02:46:41 by limjiale          #+#    #+#             */
/*   Updated: 2025/09/30 03:06:58 by limjiale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write (1 ,&c ,1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        while (*av[1])
        {
            if ((*av[1] >= 'A' && *av[1] <= 'M') || (*av[1] >= 'a' && *av[1] <= 'm'))
            {
                *av[1] += 13;
                ft_putchar(*av[1]);   
            }
            else if ((*av[1] >= 'N' && *av[1] <= 'Z') || (*av[1] >= 'n' && *av[1] <= 'z'))
            {
                *av[1] -= 13;
                ft_putchar(*av[1]);
            }
            else
            {
                ft_putchar(*av[1]);
            }
        av[1]++;
        }
    }
    ft_putchar('\n');
    return (0);    
}