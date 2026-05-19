/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:16:52 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/27 23:40:00 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**err_malloc(char **split_str)
{
	int	i;

	i = 0;
	while (split_str[i])
	{
		free(split_str[i]);
		i++;
	}
	free(split_str);
	return (NULL);
}

static int	count_words(char const *str, char sep)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] && (str[i] != sep))
		{
			count++;
			while (str[i] && (str[i] != sep))
				i++;
		}
		else
		{
			i++;
		}
	}
	return (count);
}

static char	*malloc_word(char const *s, char sep)
{
	int		i;
	int		len;
	char	*str;

	len = 0;
	while (s && s[len] && (s[len] != sep))
		len++;
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static char	**fill_split(char **str, char const *s, char sep)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (j < count_words(s, sep))
	{
		if (s[i] != sep)
		{
			str[j] = malloc_word(s + i, sep);
			if (!str[j])
			{
				err_malloc(str);
				return (NULL);
			}
			i = i + ft_strlen(str[j]);
			j++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!str)
		return (NULL);
	fill_split(str, s, c);
	str[count_words(s, c)] = NULL;
	return (str);
}
