/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtwitch <rtwitch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 14:52:35 by rtwitch           #+#    #+#             */
/*   Updated: 2022/05/30 16:52:34 by rtwitch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*buffer;

	if (count >= 18446744073709551615UL
		&& size >= 18446744073709551615UL)
		return (NULL);
	buffer = malloc(size * count);
	if (buffer)
		ft_bzero(buffer, size * count);
	return ((void *)buffer);
}
