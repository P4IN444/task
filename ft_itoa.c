/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 21:31:16 by aamajjou          #+#    #+#             */
/*   Updated: 2025/10/27 23:50:41 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_nb(int n)
{
	unsigned int	nbr;
	int				count;

	count = 0;
	if (n < 0)
	{
		count++;
		nbr = n * -1;
	}
	else
	{
		nbr = (unsigned int)n;
	}
	if (n == 0)
	{
		return (1);
	}
	while (nbr)
	{
		count++;
		nbr /= 10;
	}
	return (count);
}

static char	*fill_str(long nbr, int size)
{
	int		i;
	char	*str;

	i = 0;
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	if (nbr == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (nbr != 0)
	{
		str[size - 1 - i] = (nbr % 10) + '0';
		nbr /= 10;
		i++;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*str;
	int		size;

	nbr = n;
	size = size_nb(n);
	str = fill_str(nbr, size);
	if (!str)
		return (NULL);
	str[size] = '\0';
	return (str);
}
