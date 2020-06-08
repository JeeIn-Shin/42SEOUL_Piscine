/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeeshin <jeeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 16:51:22 by jeeshin           #+#    #+#             */
/*   Updated: 2020/06/01 12:17:40 by jeeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0' - 1;
	while (first++ < '7')
	{
		second = first;
		while (second++ < '8')
		{
			third = second;
			while (third++ < '9')
			{
				write(1, &first, 1);
				write(1, &second, 1);
				write(1, &third, 1);
				if (first != '7')
					write(1, ", ", 2);
			}
		}
	}
}
