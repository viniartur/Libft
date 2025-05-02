/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:09:37 by vvieira           #+#    #+#             */
/*   Updated: 2025/05/01 20:09:55 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ret;
	size_t	i;

	ret = malloc(count * size);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}