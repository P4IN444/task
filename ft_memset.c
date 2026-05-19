/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 19:41:31 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/21 19:41:48 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			s;
	unsigned char	*p;

	s = 0;
	p = (unsigned char *)ptr;
	while (s < n)
	{
		*p = (unsigned char)x;
		p++;
		s++;
	}
	return (ptr);
}
