/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeeshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 17:50:54 by jeeshin           #+#    #+#             */
/*   Updated: 2020/06/01 21:22:56 by jeeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp_div;
	int temp_mod;

	temp_div = (*a) / (*b);
	temp_mod = (*a) % (*b);
	*a = temp_div;
	*b = temp_mod;
}
