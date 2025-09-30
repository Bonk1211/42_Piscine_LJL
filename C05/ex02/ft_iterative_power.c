/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limjiale <limjiale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 00:06:53 by limjiale          #+#    #+#             */
/*   Updated: 2025/10/01 00:24:20 by limjiale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int result;
    
    if (power < 0)
        return (0);
    if (nb == 0 && power == 0)
        return (1);

    result = 1;
    while (power >= 1)
    {
        result = result * nb;
        power--;
    }
    return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int result = 0;
    int n = atoi(av[1]);
    int pw = atoi(av[2]);
    if (ac == 3)    
        result = ft_iterative_power(n, pw);
    printf("%d\n", result);
    return (0);
}*/