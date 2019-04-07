/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/04 11:50:36 by kturnips          #+#    #+#             */
/*   Updated: 2019/02/05 20:13:53 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int				result;
	int				s;
	unsigned int	n;

	s = 1;
	while (*str == ' ' || *str == '0' || *str == '\t' || *str == '\v' ||
			*str == '\n' || *str == '\r' || *str == '\f')
		str++;
	n = 0;
	if ((*str == '-') || (*str == '+'))
	{
		if (*str == '-')
			s = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	result = s * n;
	return (result);
}