/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:05:03 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/03 21:05:05 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
    while (n-- != 0 && *src != (unsigned char) c)
    {
        *dst = *src;
        dst++;
        src++;
    }
    if (*src == c)
    {
      *dst = c;
      return(++dst);
    }
    return (0);
}
