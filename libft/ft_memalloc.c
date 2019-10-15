/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:03:11 by dlartigu          #+#    #+#             */
/*   Updated: 2019/04/18 11:41:24 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char *str;

	if (!size)
		return (NULL);
	if (!(str = (char *)malloc(sizeof(*str) * size)))
		return (NULL);
	str = ft_memset(str, 0, size);
	return (str);
}
