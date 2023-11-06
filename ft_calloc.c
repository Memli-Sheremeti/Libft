/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:53:48 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/06 16:37:12 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;

	ptr = (char *) malloc((n * size) * sizeof(char));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (n * size));
	return (ptr);
}
