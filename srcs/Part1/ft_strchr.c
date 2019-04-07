/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:49:55 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/06 19:49:56 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if (*s == ((unsigned char) c))
			return(s);
		++s;
	}
	if (*s == c)
		return(s);
	return(NULL);
}
