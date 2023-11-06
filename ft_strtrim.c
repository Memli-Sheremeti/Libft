/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:37:45 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/06 16:39:49 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_ischarset(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static	size_t	ft_count_set(char const *str, char const *set)
{
	size_t		count;
	size_t		i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (ft_ischarset(str[i], set))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;
	size_t	nb_set;
	size_t	i;

	len = ft_strlen(s1);
	nb_set = ft_count_set(s1, set);
	str = (char *) malloc((len - nb_set + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < (len - nb_set))
	{
		if (ft_ischarset(*s1, set) == 0 && *s1 != '\0')
			str[i] = *s1;
		i++;
		s1++;
	}
	str[i] = '\0';
	return (str);
}
