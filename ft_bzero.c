/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:56:39 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/25 23:42:17 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char				*str;
	unsigned int		i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// void	ft_bzero(void *s, size_t n)
// {
// 	size_t i;

// 	i = 0;

// 	while (i < n)
// 	{
// 		((char *)s)[i] = 0;
// 	}
// }
// ft_bzero Define os primeiros `n` bytes da memória como zero