/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahadama- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 14:53:01 by ahadama-          #+#    #+#             */
/*   Updated: 2024/05/15 14:53:03 by ahadama-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t		i;
	char		*r;

	r = s;
	i = 0;
	while (i < n)
	{
		r[i] = (char)c;
		i++;
	}
	return (s);
}
