/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:42:29 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/07 16:57:16 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "stdio.h"
//#include "string.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	i = 0;
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (!dest && !src)
		return (NULL);
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int	main()
{
	char	src[] = "ouioui";
	char	dest[] = "nonnon";

	ft_memcpy(dest, src, 7);
	printf("%s\n", dest);
}
*/
