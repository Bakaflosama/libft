/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:19:20 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/10 15:27:08 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const void	*tmp;

	tmp = src;
	if (!dst && !tmp && !src && len)
		return (0);
	while (len--)
		*(unsigned char *)(dst++) = *(unsigned char *)(tmp++);
	return (dst);
}
