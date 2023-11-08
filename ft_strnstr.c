/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:41:34 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/07 18:12:43 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	pos;
	size_t	i;
	char	*str;

	str = (char *)s;
	if (!str && !len)
		return (NULL);
	if (!*to_find || to_find == str)
		return (str);
	pos = 0;
	while (str[pos] != '\0' && pos < len)
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i]
				&& (pos + i) < len)
				i++;
			if (to_find[i] == '\0')
				return (&str[pos]);
		}
		pos++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <bsd/string.h>

int     main(void)
{
        char str[] = "Nous test dans cette chaine de test";
        char find[] = "test";

        printf("ft:%s\n", ft_strnstr(str, find, 9));
        //printf("cc:%s\n", strnstr(str, find, 60));

        return (0);
}
*/
