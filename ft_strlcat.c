/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:27:23 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/10 14:49:41 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size == 0)
		return (0);
	while (dest[i])
		i++;
	while (src[j] && (i + j) <= size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (!src[j])
		dest[i] = '\0';
	return (ft_strlen(dest));
}
