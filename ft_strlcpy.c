/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:30:40 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/06 16:33:46 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>
//#include <bsd/string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	i = 0;
	if (!dst || !src)
		return (0);
	if (size != 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len_src);
}

/*int	main()
{
	char	str[] = "Salut ca va ou quoi ah";
	char	dest[2];
	char	h_dest[2];
	int	x;
	int	y;

	x = ft_strlcpy(dest, str, 3);
	y = strlcpy(h_dest, str, 3);
	printf("%d\n%s\n", x, dest);
	printf("%d\n%s\n", y, h_dest);

}
*/
