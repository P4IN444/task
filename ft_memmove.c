/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:38:26 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/23 20:16:56 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t s)
{
	unsigned char		*d;
	const unsigned char	*sr;
	size_t				i;

	d = dest;
	sr = src;
	i = 0;
	if (!src && !dest)
		return (NULL);
	if (src == dest)
		return (dest);
	if (d < sr)
	{
		ft_memcpy(d, sr, s);
	}
	else
	{
		while (s > i)
		{
			d[s - 1] = sr[s - 1];
			s--;
		}
	}
	return (dest);
}
