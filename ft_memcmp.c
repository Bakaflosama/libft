/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:52:03 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/12 15:29:33 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)(str1++) != *(unsigned char *)(str2++))
			return (*(unsigned char *)(--str1) - *(unsigned char *)(--str2));
	}
	return (0);
}
