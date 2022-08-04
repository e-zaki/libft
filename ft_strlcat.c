/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zihihi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:22:49 by zihihi            #+#    #+#             */
/*   Updated: 2021/12/07 21:13:10 by zihihi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	len_dst = ft_strlen(dst);
	i = 0;
	if (dstsize > len_dst)
	{
		while (src[i] && (len_dst + i) < (dstsize - 1))
		{
			dst[len_dst + i] = src[i];
			i++;
		}
		dst[len_dst + i] = '\0';
		return (len_dst + len_src);
	}
	else
		return (dstsize + len_src);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
	char d[20] = "hello";
	char s[] = " embrace it";
	size_t i = ft_strlcat(NULL, s, 0);
	printf("the destination : $%s$\n", d);
	printf("the return value : %zu\n", i);
	return (0);
}*/
