/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:45:23 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/11 17:38:55 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str1)
{
	char	*str2;
	int		len;

	len = ft_strlen(str1) + 1;
	str2 = malloc(sizeof(char ) * len);
	if (!str2)
		return (0);
	ft_memcpy(str2, str1, len);
	return (str2);
}
