/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limjiale <limjiale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/01 00:26:08 by limjiale          #+#    #+#             */
/*   Updated: 2025/10/01 00:43:36 by limjiale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if (power < 0)
    {
        return (0);
    }
    if (power == 0)
    {
        return (1);
    }
    else
    {
        return (nb * ft_recursive_power(nb, power - 1));
    }
}
/*
#include <stdio.h>
int main (void)
{
    int result = 1;
    result = ft_recursive_power(2, 5);
    printf ("%d", result);
    return (0);
}*/