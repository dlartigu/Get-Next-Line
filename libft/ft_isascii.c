/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlartigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 16:33:32 by dlartigu          #+#    #+#             */
/*   Updated: 2019/04/12 16:46:53 by dlartigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}