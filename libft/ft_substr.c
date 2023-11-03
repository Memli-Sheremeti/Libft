/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:57:42 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/02 17:15:16 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*sub;

	sub = (char *) malloc(len + 1 * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i])
	{
		sub[i] = s[start + i];
		i++;
	}
	return (sub);
}
