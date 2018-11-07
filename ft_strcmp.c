/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <dde-jesu@42.student.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/05 15:59:10 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/11/07 14:11:15 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
