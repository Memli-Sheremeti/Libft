/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:34:49 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/06 16:29:04 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "ctype.h"
//#include "stdio.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}

/*int	main()
{
	int	digit;
	int	alpha;

	digit = 55;
	alpha = 90;
	printf("%d\n%d\n", ft_isalnum(digit), isalnum(digit));
	printf("%d\n%d\n", ft_isalnum(alpha), isalnum(alpha));

}
*/
