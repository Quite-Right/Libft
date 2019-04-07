/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 18:44:53 by kturnips          #+#    #+#             */
/*   Updated: 2019/04/05 17:27:40 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*new;
	size_t	i;

	i = 0;
	new = (void *)(malloc(size * sizeof(void)));
	if (new)
		return (new);
	return (0);
}
