/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:57:42 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/07 15:40:36 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_del(char *str)
{
	str = malloc(sizeof(char));
	if (!str)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	length;
	size_t	index;

	length = ft_strlen(s);
	index = 0;
	str = NULL;
	if (length < start)
	{
		str = ft_del(str);
		return (str);
	}
	else if (s)
	{
		str = malloc((len + 1) * sizeof(char));
		while (index < len && index + start < length)
		{
			str[index] = s[start + index];
			index++;
		}
		str[index] = '\0';
		return (str);
	}
	return (NULL);
}
