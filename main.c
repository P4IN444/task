/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamajjou <aamajjou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 18:10:06 by aamajjou          #+#    #+#             */
/*   Updated: 2026/05/19 18:18:54 by aamajjou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str;

	printf("Running valid tests...\n");
	assert(ft_strlen("Hello") == 5);
	assert(ft_toupper('a') == 'A');
	str = ft_strjoin("42", "Network");
	assert(strcmp(str, "42Network") == 0);
	free(str);
	printf("Valid tests passed!\n");
	printf("fix and Running the failing test...\n");
	assert(ft_strlen("pass") == 4);
	return (0);
}
