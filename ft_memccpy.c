/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:58:57 by mshereme          #+#    #+#             */
/*   Updated: 2023/10/31 14:17:45 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	d;
	unsigned char	s;
	size_t			i;

	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (i < n)
	{
		d[i] = s[i];
		if (s[i] == c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
