/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:15:32 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/25 23:39:57 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[n] != '\0' && s2[n] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned)s1[i] - (unsigned)s2[i]);
		i++;
	}
	if (i < n)
	{
		if (s1[n] == '\0' && s2[n] == '\0')
			return ((unsigned)s1[i] - (unsigned)s2[i]);
		if (s1[n] != '\0' && s2[n] != '\0')
			return ((unsigned)s1[i] - (unsigned)s2[i]);
	}
	return (0);
}
// #include "libft.h"

// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	if (n == 0)
// 		return (0);
// 	i = 0;
// 	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
// 		i++;
// 	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
// }