/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:47:48 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/12 16:20:28 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char const		*dst;
	unsigned int	i;

	i = 0;
	dst = malloc(len);
	if (!dst)
		return (0);
	while (i++ < start)
		s++;
	ft_memcpy((void *)dst, s, len);
	return ((char *)dst);
}
