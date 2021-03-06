/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wctomb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:44:03 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/12/11 14:02:34 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>

size_t	ft_wcstrlen(const wchar_t *s)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if ((unsigned)*s < 0x80)
			len += 1;
		else if ((unsigned)*s < 0x800)
			len += 2;
		else if ((unsigned)*s < 0xd800 || (unsigned)*s - 0xe000 < 0x2000)
			len += 3;
		else if ((unsigned)*s - 0x10000 < 0x100000)
			len += 4;
		else
			break ;
		s++;
	}
	return (len);
}
