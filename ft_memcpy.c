/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:32:37 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/10 15:01:10 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*tmp;

	tmp = dst;
	if (!dst && !src && n)
		return (0);
	while (n--)
		*(unsigned char *)(dst++) = *(unsigned char *)(src++);
	return (tmp);
}
