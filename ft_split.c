/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:45:24 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/07 12:28:41 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ischarset(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;
	int	bit;

	i = 0;
	words = 0;
	bit = 0;
	while (s[i] != '\0')
	{
		if (ft_ischarset(s[i], c) == 0 && bit == 0)
		{
			words++;
			bit = 1;
		}
		if (ft_ischarset(s[i], c) == 1 && bit == 1)
			bit = 0;
		i++;
	}
	return (words);
}

static	char	*ft_get_word(char const *s, char c)
{
	int		i;
	int		j;
	char	*word;

	i = 0;
	j = 0;
	while (s[i] != '\0' && ft_ischarset(s[i], c) == 0)
		i++;
	word = (char *) malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (j < i)
	{
		word[j] = s[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

static void	ft_inscribe(char **tab, char const *s, char c)
{
	int	words_check;
	int	i;

	i = 0;
	words_check = 0;
	while (*s != '\0')
	{
		while (ft_ischarset(*s, c) == 0 && *s != '\0')
		{
			words_check++;
			s++;
		}
		if (words_check > 0)
			tab[i++] = ft_get_word(s - words_check, c);
		words_check = 0;
		while (ft_ischarset(*s, c) == 1 && *s != '\0')
			s++;
	}
	tab[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		words;

	words = 0;
	if (!s)
		return (0);
	words = ft_count_words(s, c);
	tab = (char **) malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	ft_inscribe(tab, s, c);
	return (tab);
}

/*#include <stdio.h>

int     main(int ac, char **av)
{
        char    charset = ' ';
        char    **tab;
	int	i = 0;
	(void) ac;

        tab = ft_split(av[1], charset);
        printf("%s\n", tab[0]);
      	printf("%s\n", tab[1]);
       	printf("%s\n", tab[2]);
       	printf("%s\n", tab[3]);
	while (i < 4)
	{
		free(tab[i]);
		i++;
	}
	free(tab[0]);
	free(tab);
        return (0);
}
*/
