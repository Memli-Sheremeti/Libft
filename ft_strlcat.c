/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:41:29 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/07 17:50:54 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_s = ft_strlen(src);
	if (!dest && size == 0)
		return (len_s);
	len_d = ft_strlen(dest);
	i = 0;
	if (size <= len_d)
		return (len_s + size);
	while (src[i] != '\0' && i < size - len_d - 1)
	{
		dest[i + len_d] = src[i];
		i++;
	}
	dest[i + len_d] = '\0';
	return (len_s + len_d);
}

/*int	main()
{
	char	dst[2] = "a";
	char	h_dst[2] = "a";
	char	src[] = "ca va ?";

	printf("%lu\n%s\n", ft_strlcat(dst, src, 4), dst);
	printf("%lu\n%s\n", strlcat(h_dst, src, 4), h_dst);
	printf("%lu\n%s\n", ft_strlcat(dst, src, 4), dst);

}
*/
