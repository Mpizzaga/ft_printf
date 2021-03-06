/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpizzaga <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/02 14:12:06 by mpizzaga          #+#    #+#             */
/*   Updated: 2019/02/15 15:29:08 by mpizzaga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

char			*ft_ullitoa(unsigned long long n)
{
	char	*str;
	unsigned long long		temp_n;
	int		len;
	int		neg;

	len = 1;
	neg = 0;
	temp_n = n;
	while (temp_n / 10 > 0 && len++)
		temp_n /= 10;
	len = len + neg;
	if (!(str = ft_strnew(len)))
		return (NULL);
	while (len-- > 0)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}
