/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:27:23 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/10 19:05:02 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			dstsize;
	size_t			srcsize;

	dstsize = ft_strlen(dest);
	srcsize = ft_strlen(src);
	if (dstsize > size || !src || !dest)
		return (srcsize + size);
	j = 0;
	i = dstsize;
	while (src[j] && i + 1 < size)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (srcsize + dstsize);
}
