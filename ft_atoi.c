/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:04:33 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/07 14:32:56 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_power10(int nbr)
{
    int multiplier;

    multiplier = 1;
    while (nbr > 0)
    {
        multiplier *= 10;
        nbr--;
    }
    return (multiplier);
}

int ft_atoi(const char *str)
{
    int i;
    int j;
    int nb;
    int sign;

    i = 0;
    j = 0;
    nb = 0;
    sign = 1;
    while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
    {
        i++;
        j++;
    }
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
        j++;
    }
    if (str[i] == '+')
    {
        i++;
        j++;
    }
    while (str[i] > 47 && str[i] < 58)
        i++;
    while (str[j] > 47 && str[j] < 58)
        nb += ft_power10(--i) * (str[j++] - 48);
    nb *= sign;
    return (nb);
}