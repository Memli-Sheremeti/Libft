/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:02:30 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/03 10:28:29 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen(char const *str)
{
	char const	*s;

	s = str;
	while (*s)
		s++;
	return (s - str);
}

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	size_t		i;
	char		*str;

	if (!s || !f)
		return (NULL);
	str = (char *) malloc(ft_strlen(s) + 1 * sizeof(char));
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
