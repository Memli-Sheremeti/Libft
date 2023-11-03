/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 15:41:29 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/03 10:24:27 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <bsd/string.h>

static	size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	i = 0;
	if (size <= len_d)
		return (len_s + size);
	while (src[i] != '\0' && i < size - len_d - 1)
	{
		dst[i + len_d] = src[i];
		i++;
	}
	dst[i + len_d] = '\0';
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
