/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 02:38:45 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/21 19:46:53 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	s;

	i = 0;
	s = 0;
	if (!*needle)
		return ((char *)haystack);
	if (!haystack && !len)
		return (NULL);
	while (s < len && haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j] && s + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)haystack + i);
			j++;
		}
		i++;
		s++;
	}
	return (NULL);
}
