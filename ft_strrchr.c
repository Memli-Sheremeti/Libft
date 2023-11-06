/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:15:31 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/06 16:35:02 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	str = (char *)s + len;
	while (str != s)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}

/*static char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = s;
	while (*str != '\0')
	{
		if (*str == (char) c)
			return (str);
		str++;
	}
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*found;
	char	*temp;

	str = s;
	temp = ft_strchr(str, c);
	found = NULL;
	while (temp != '\0')
	{
		found = temp;
		str = temp + 1;
		temp = ft_strchr(str, c);
	}
	return (found);
}
*/
