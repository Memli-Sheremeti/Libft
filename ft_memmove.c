/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:41:31 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/07 16:59:26 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"
//#include "string.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*to;
	int					i;

	to = (unsigned char *) dest;
	if (!to && !src)
		return (NULL);
	if (to > (unsigned char *)src)
	{
		i = n - 1;
		while (i >= 0)
		{
			to[i] = ((unsigned char *) src)[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while ((size_t)i < n)
		{
			to[i] = ((unsigned char *) src)[i];
			i++;
		}
	}
	return (dest);
}

/*int	main()
{
	char	src[] = "No,hello you";
	char	*dst;
	char	*h_dst;

	dst = ft_memmove(src + 1, src, 2);
	h_dst = memmove(src + 1, src, 2);
	printf("%s\n%s\n", dst, h_dst);
	return (0);
}
*/
