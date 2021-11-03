/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdrabi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:32:59 by hdrabi            #+#    #+#             */
/*   Updated: 2021/11/03 10:15:32 by hdrabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	char *d;
	char *s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
