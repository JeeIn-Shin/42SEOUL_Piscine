/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeeshin <jeeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/28 21:28:45 by jeeshin           #+#    #+#             */
/*   Updated: 2020/05/31 22:14:51 by jeeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	second = first + 1;
	while (first <= 98)
	{
		while (second <= 99)
		{
			ft_putchar('0' + (first / 10));
			ft_putchar('0' + (first % 10));
			ft_putchar(' ');
			ft_putchar('0' + (second / 10));
			ft_putchar('0' + (second % 10));
			second++;
			if (first != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		first++;
		second = first + 1;
	}
}
