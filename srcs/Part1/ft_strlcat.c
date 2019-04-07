/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:16:31 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/06 19:16:57 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t size)
{
	size_t result;
	result = ft_strlen(dst) + ft_strlen(src);
	while(*dst && (--size > 0))
	{
		size;
		++dst;
	}
	if (size == 0)
		*dst = '\0'
	while(*src && (--size > 0))
	{
		*dst = *src;
		++dst;
		++src;
	}
	*dst == '\0';
	return(result);
}
