/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:03:33 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/12 12:25:17 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isneedle(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	while (needle[i])
	{
		if (haystack[i] != needle[i])
			return (0);
		else
			i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int				verif;

	if (len < 1 || !haystack)
		return (NULL);
	if (!needle)
		return ((char *)haystack);
	while (*haystack && len >= ft_strlen(needle))
	{
		if (*haystack == *needle)
		{
			verif = ft_isneedle(haystack, needle);
			if (verif == 1)
				return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (0);
}
