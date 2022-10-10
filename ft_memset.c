/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flweynan <flweynan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:38:59 by flweynan          #+#    #+#             */
/*   Updated: 2022/10/10 14:06:28 by flweynan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	void	*tmp;

	tmp = s;
	while (n--)
		*(unsigned char *)(tmp++) = (unsigned char)c;
	return (s);
}
