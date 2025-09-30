/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: limjiale <limjiale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 23:52:10 by limjiale          #+#    #+#             */
/*   Updated: 2025/10/01 00:06:14 by limjiale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
       if (nb < 0)
            return (0);
       if (nb == 0)
            return (1);
       return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    int result = 1;
    int number = atoi(av[1]);
    if (ac == 2)
    {
        result = ft_recursive_factorial(number);
        printf("%d\n", result);
    }
    return (0);
}*/