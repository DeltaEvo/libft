/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-jesu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 11:47:05 by dde-jesu          #+#    #+#             */
/*   Updated: 2018/12/11 14:02:00 by dde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STR_H
# define STR_H

# include <stddef.h>
# include <wchar.h>

char	*ft_strchr(const char *s, int c);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *s);
size_t	ft_strnlen(const char *s, size_t max);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_wctomb(char *buff, wchar_t wc);
size_t	ft_wcstrlen(const wchar_t *s);
size_t	ft_wcstrnlen(const wchar_t *s, size_t max);

#endif
