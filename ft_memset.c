/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:52:03 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/02 10:15:07 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include "string.h"
//#include "stdio.h"

/*int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *) s;
	while (i < n)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (s);
}

/*int	main()
{
	char	my_s[7] = "lololo";
	char	his_s[7] = "lololo";
	int	my_tab[] = {1,2,3,4,5};
	int	his_tab[] = {1,2,3,4,5};

	ft_memset(my_s, 33, ft_strlen(my_s));
	memset(his_s, 33, ft_strlen(his_s));
	

	ft_memset(my_tab, -1, 20);
	memset(his_tab, -1, 20);

	printf("%s\n%s\n", my_s, his_s);
	
	
	int	i = 0;
	while (i < 5)
	{
		printf("%d", my_tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 5)
	{
		printf("%d", his_tab[i]);
		i++;
	}
}
*/
