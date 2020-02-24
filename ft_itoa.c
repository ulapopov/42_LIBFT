/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: upopov <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 18:35:53 by upopov            #+#    #+#             */
/*   Updated: 2020/02/24 09:46:13 by upopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int		is_negative(int *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		return (1);
	}
	return (0);
}

char			*ft_itoa(int n)
{
	int				len;
	int				negative;
	char			*s;
	unsigned int	val;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = 2;
	negative = is_negative(&n);
	val = n;
	while (val /= 10)
		len++;
	len += negative;
	if (!(s = (char*)malloc(len)))
		return (NULL);
	s[--len] = '\0';
	while (len--)
	{
		s[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (negative)
		s[0] = '-';
	return (s);
}
