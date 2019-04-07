/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:55:19 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/06 19:55:20 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char *result;

	result = NULL;
	while(*s)
	{
		if (*s == ((unsigned char) c))
			result = s;
		++s;
	}
	if (*s == c)
		result = s;
	return(result);
}
