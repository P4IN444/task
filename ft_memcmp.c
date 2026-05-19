/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:16:38 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/27 23:49:29 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			s;
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	s = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (s < n && *p1 == *p2)
	{
		p1++;
		p2++;
		s++;
	}
	if (s == n)
		return (0);
	return (*p1 - *p2);
}
