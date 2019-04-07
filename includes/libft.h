/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kturnips <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 13:21:24 by kturnips          #+#    #+#             */
/*   Updated: 2019/02/06 13:22:33 by kturnips         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

void *ft_memset(void *s, int c, size_t n);
size_t ft_strlen(const char *s);

void * ft_memalloc(size_t size);
void ft_memdel(void **ap);
char * ft_strnew(size_t size);
void ft_strdel(char **as);
void ft_strclr(char *s);
void ft_striter(char *s, void (*f)(char *));
void ft_striteri(char *s, void (*f)(unsigned int, char *));
char * ft_strmap(char const *s, char (*f)(char));
char * ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char * ft_strsub(char const *s, unsigned int start, size_t len);
char * ft_strjoin(char const *s1, char const *s2);

#endif
