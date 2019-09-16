/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jphasha <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 09:20:55 by jphasha           #+#    #+#             */
/*   Updated: 2019/07/13 00:32:03 by jphasha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	size_t			i;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	i = 0;
	if (n == 0 || dst == src)
	{
		return (dst);
	}
	while (--n)
	{
		pdst[i] = psrc[i];
		i++;
	}
	pdst[i] = psrc[i];
	return (dst);
}
