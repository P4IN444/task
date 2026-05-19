/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:56:04 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/21 19:47:17 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_chr;

	last_chr = 0;
	while (*s != '\0')
	{
		if (c == *s)
			last_chr = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last_chr);
}
