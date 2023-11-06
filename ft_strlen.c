/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:27:22 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/06 15:49:59 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//#include "string.h"
//#include "stdio.h"
/*int	main()
{
	char	str[] = "Hello, world!";
	printf("%lu\n%lu", ft_strlen(str), strlen(str));
}
*/
