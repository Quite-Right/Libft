/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 15:56:53 by kturnips          #+#    #+#             */
/*   Updated: 2019/02/05 22:32:39 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle);
{
	unsigned int index_str;
	unsigned int index_to_find;

	index_str = 0;
	while (haystack[index_str] != '\0')
	{
		if (haystack[index_str] == needle[0])
		{
			index_to_find = 1;
			while (haystack[index_str + index_to_find] == needle[index_to_find])
			{
				index_to_find++;
			}
			if (needle[index_to_find] == '\0')
				return (&haystack[index_str]);
		}
		index_str++;
	}
	return (NULL);
}
