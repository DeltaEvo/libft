/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 17:09:55 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/08 12:19:35 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdint.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const uint32_t	*c_s = s;
	unsigned char	*b_s;
	uint32_t		repeated_c;
	uint32_t		mask;

	repeated_c = (c & 0xFF) | ((c & 0xFF) << 8);
	repeated_c |= repeated_c << 16;
	while (n >= sizeof(uint32_t))
	{
		mask = *c_s++ ^ repeated_c;
		if ((mask & 0xff) == 0)
			return ((void *)c_s - 4);
		if ((mask & 0xff00) == 0)
			return ((void *)c_s - 3);
		if ((mask & 0xff0000) == 0)
			return ((void *)c_s - 2);
		if ((mask & 0xff000000) == 0)
			return ((void *)c_s - 1);
		n -= sizeof(uint32_t);
	}
	b_s = (unsigned char *)c_s;
	while (n--)
		if (*b_s++ == (unsigned char)c)
			return ((void *)b_s - 1);
	return (NULL);
}