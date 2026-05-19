/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 23:50:30 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/25 00:20:29 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	end = len - 1;
	begin = 0;
	while (begin < len && ft_strchr(set, s1[begin]))
		begin++;
	while (end >= begin && ft_strchr(set, s1[end]))
		end--;
	str = (char *)malloc(end - begin + 2);
	if (!str)
		return (NULL);
	ft_memcpy(str, (s1 + begin), end - begin + 1);
	str[end - begin + 1] = '\0';
	return (str);
}
