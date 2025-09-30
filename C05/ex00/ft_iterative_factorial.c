/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limjiale <limjiale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:33:12 by limjiale          #+#    #+#             */
/*   Updated: 2025/09/30 23:51:06 by limjiale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int result;
    int i;
    if (nb < 0)
        return (0);

    if (nb == 0 || nb == 1)
        return (1);
    
    result = 1;
    i = 2;    
    while (i <= nb)
    {
        result *= i;
        i++;
    }
    return (result);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int result = 1;
    int number = atoi(av[1]);
    if (ac == 2)
        result = ft_iterative_factorial(number);
    printf("%d", result);
    return (0);
}*/