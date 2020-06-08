/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeeshin <jeeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 21:10:06 by jeeshin           #+#    #+#             */
/*   Updated: 2020/06/02 19:01:20 by jeeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int temp;
	int index;
	int right;

	right = size - 1;
	index = 0;
	if (size == 0)
		return ;
	while (index < (size / 2))
	{
		temp = tab[index];
		tab[index] = tab[right];
		tab[right] = temp;
		index++;
		right--;
	}
}
