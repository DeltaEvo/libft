/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 12:50:05 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/08 09:31:02 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	l;

	if (!s)
		return (0);
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	l = ft_strlen(s);
	while (l > 1 && (s[l - 1] == ' ' || s[l - 1] == '\n' || s[l - 1] == '\t'))
		l--;
	return (ft_strsub(s, 0, l));
}
