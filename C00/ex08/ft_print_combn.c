/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeeshin <jeeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/30 16:45:58 by jeeshin           #+#    #+#             */
/*   Updated: 2020/05/31 17:01:36 by jeeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char);
void	ft_putnbr(int);
void	ft_draw_out(int, int);
void	ft_print_list(int); //수정필요
void	ft_print_comb(int);

int main(void)
{
	ft_print_comb(3);
	return 0;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		ft_putchar('0' + nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + (nb % 10));
	}
	else
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}

void	ft_draw_out(int n, int m)
{
	int i;

	i = 1;
	while (i <= n)
	{
		if(i < 10)
		{
			ft_putchar('0' + 0);
			ft_print_list(i);
		}
		if (i >= 10)
		{
			/* how to check ?*/		
		}
		i++;
	}
}

int	mod(int i, int m)
{	
	return (i / (m - 1) * 10 );
}

void	ft_print_comb(int r)
{
	int n;
	int m;

	n = 1;
	m = 2;
	if(r <= 0 && r >= 10)
		return ;
	if (r == 1)
	{
		while(n < 9)
		{
			if(n == 9)
				ft_print_list(n);
			else
				ft_putnbr(n);
			n++;
		}
	}
	else
	{
		while(r)
		{
			n *= 10;
			r--;
		}
		ft_draw_out(n - 1, m);
	}
}