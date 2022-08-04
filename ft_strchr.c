/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: zihihi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:19:08 by zihihi            #+#    #+#             */
/*   Updated: 2021/11/27 17:16:04 by zihihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*d;

	d = (char *) s;
	while (*d)
	{
		if (*d == (char) c)
			return (d);
		d++;
	}
	if (*d == (char) c)
		return (d);
	return (NULL);
}
/*#include <stdio.h>
int main(void)
{
	char *s = "hello to you";
	printf("%s\n", ft_strchr(s, 't' + 256));
}*/
