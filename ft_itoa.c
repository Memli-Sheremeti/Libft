/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:27:19 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/03 11:18:26 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_nb(long int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb >= 10)
	{
		nb /= 10;
		len++;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	long int	nb;
	int			len;
	char		*str;

	nb = n;
	len = ft_len_nb(nb);
	str = (char *) malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	if (nb < 0)
	{
		str[0] = '-';
	}
	if (nb == 0)
	{
		str[0] = '0';
	}
	str[len--] = '\0';
	while (nb > 0)
	{
		str[len] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	return (str);
}
