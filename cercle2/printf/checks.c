/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lusokol <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 13:23:07 by lusokol           #+#    #+#             */
/*   Updated: 2019/12/13 13:27:40 by lusokol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int		ft_check_flag(char a)
{
	if (a == '-' || a == '0')
		return (1);
	return (0);
}

int		ft_istype(char a)
{
	if (a == 'd' || a == 'i' || a == 'c' || a == 's' ||
			a == 'x' || a == 'X' || a == 'p' || a == 'u')
		return (1);
	return (0);
}
