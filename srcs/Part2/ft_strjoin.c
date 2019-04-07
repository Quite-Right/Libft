/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:40:12 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/05 20:10:07 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	i = -1;
	j = -1;
	new = (char *)(malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) - 1)));
	if (new)
	{
		while (++i < (ft_strlen(s1) - 1))
			new[i] = s1[++j];
		--i;
		j = -1;
		while (++i < (ft_strlen(s1) + ft_strlen(s2) - 1))
			new[i] = s2[++j];
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
