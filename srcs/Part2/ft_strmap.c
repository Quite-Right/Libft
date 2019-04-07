/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:19:27 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/05 18:03:24 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*fresh;

	i = -1;
	fresh = (char *)(malloc(sizeof(char) * ft_strlen(s)));
	while (++i != ft_strlen(s))
		fresh[i] = f(*s);
	fresh[i] = '\0';
	return (fresh);
}
