/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 18:24:17 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/05 20:31:28 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		memo(int n)
{
	size_t	i;

	i = 1;
	if (n < 0)
		++i;
	while (n / 10 != 0)
		++i;
	return (i);
}

char	*ft_itoa(int n)
{
	char	*new;
	int		i;

	i = -1;
	new = malloc(sizeof(char) * memo(n));
	if (new)
	{
		if (n < 0)
			new[0] = '-';
		while (n / 10 != 0)
		{
			new[memo(n) - ++i - 1] = n % 10 + '0';
			n = n / 10;
		}
		return (new);
	}
	return (NULL);
}
