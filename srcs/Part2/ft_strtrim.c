/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 13:16:57 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/05 13:16:58 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s)
{
	char		*new;
	size_t	i;
	size_t	j;
	size_t	n;

	n = 0;
	j = 0;
	i = 0;
	if (s[ft_strlen(s) - 1] == '\n' || s[ft_strlen(s) - 1] == ' ' ||
	s[ft_strlen(s) - 1] == '\t' || s[0] == '\n' || s[0] == ' ' || s[0] == '\t')
	{
		while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
			i++;
		while (s[ft_strlen(s) - 1 - j] == '\n' || s[ft_strlen(s) - 1 - j] == ' '
		|| s[ft_strlen(s) - 1 - j] == '\t')
			j++;
		new = (char *)(malloc(sizeof(char) * (ft_strlen(s) - i - j)));
		if (new)
		{
			while ((++i - 2) < (ft_strlen(s) - j - 1))
				new[n] = s[i - 2];
			return (new);
		}
	}
	return (NULL);
}
