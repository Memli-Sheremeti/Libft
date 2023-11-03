/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:27:22 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/02 11:33:02 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	const char	*s;

	s = str;
	while (*s != '\0')
		s++;
	return (s - str);
}

//#include "string.h"
//#include "stdio.h"
/*int	main()
{
	char	str[] = "Hello, world!";
	printf("%lu\n%lu", ft_strlen(str), strlen(str));
}
*/
