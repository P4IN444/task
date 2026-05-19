/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:44:52 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/23 16:37:00 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	dest_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	i = 0;
	j = dest_len;
	while (j + 1 < size && src[i])
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	if (dest_len < size)
		dest[j] = '\0';
	return (dest_len + src_len);
}
