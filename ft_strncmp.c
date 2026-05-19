/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:56:16 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/22 01:07:04 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while (*str1 && *str2 && i < n - 1 && *str1 == *str2)
	{
		str1++;
		str2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
