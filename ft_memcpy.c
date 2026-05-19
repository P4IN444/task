/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:38:16 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/23 16:07:33 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t s)
{
	unsigned char		*d;
	const unsigned char	*sr;
	size_t				i;

	d = dest;
	sr = src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < s)
	{
		d[i] = sr[i];
		i++;
	}
	return (dest);
}
