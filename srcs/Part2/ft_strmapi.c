/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 20:21:54 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/05 18:04:02 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*fresh;

	i = -1;
	fresh = (char *)(malloc(sizeof(char) * ft_strlen(s)));
	while (++i != ft_strlen(s))
		fresh[i] = f(i, *s);
	fresh[i] = '\0';
	return (fresh);
}
