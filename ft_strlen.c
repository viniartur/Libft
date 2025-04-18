/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:34:04 by vvieira           #+#    #+#             */
/*   Updated: 2025/04/18 13:38:43 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	n;

	n = 0;
	while (src[n] != '\0')
		n++;
	return (n);
}
// ft_strlen  | Calcula o comprimento de uma string (sem contar o `\0`). |
