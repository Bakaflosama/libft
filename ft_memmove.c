/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:19:20 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/10 17:41:53 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmpsrc;
	char	*tmpdst;

	tmpdst = (char *) dst;
	tmpsrc = (char *) src;
	if (src == dst)
		return (dst);
	if (tmpdst > tmpsrc)
	{
		while (len--)
			*(tmpdst + len) = *(tmpsrc + len);
		return (dst);
	}
	while (len--)
		*tmpdst++ = *tmpsrc++;
	return (dst);
}
