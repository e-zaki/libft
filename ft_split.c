/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihihi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:19:32 by zihihi            #+#    #+#             */
/*   Updated: 2021/11/27 17:37:11 by zihihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_assign(char **ar, char *str, char sep, unsigned int *w);
static	void	ft_count(char *str, char sep, unsigned int *w);

char	**ft_split(char const *s, char c)
{
	unsigned int	nw;
	char			**ar;
	char			*str;

	if (!s)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	nw = 0;
	ft_count(str, c, &nw);
	ar = malloc(sizeof(char *) * (nw + 1));
	if (!ar)
		return (NULL);
	ft_assign(ar, str, c, &nw);
	free(str);
	return (ar);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char **ar;
	char *s = "$$$hello$$everyone$how are$$you$";
	ar = ft_split(s, '$');
	for(int i = 0; i < 4; i++)
	{
		printf("%s\n", ar[i]);
		free(ar[i]);
	}
	free(ar);
}*/

static	void	ft_assign(char **ar, char *str, char sep, unsigned int *w)
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	while (i < *w)
	{
		while (*str == sep)
			str++;
		tmp = str;
		while (*str != sep && *str)
			str++;
		*str = 0;
		ar[i] = ft_strdup(tmp);
		*str = sep;
		i++;
	}
	ar[*w] = 0;
}

static	void	ft_count(char *str, char sep, unsigned int *w)
{
	while (*str)
	{
		while (*str == sep)
			str++;
		if (*str != sep && *str)
			(*w)++;
		while (*str != sep && *str)
			str++;
	}
}
