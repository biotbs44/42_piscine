/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 12:46:50 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 12:46:53 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_int_array(int *array, int n)
{
	int	idx;

	idx = 0;
	while (++idx < n)
		if (array[idx - 1] >= array[idx])
			return ;
	idx = -1;
	while (++idx < n)
		ft_putchar(array[idx] + 48);
	if (array[0] != (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	array[10];
	int	last_idx;

	if (!(n > 0 && n < 10))
		return ;
	i = -1;
	while (++i < n)
		array[i] = i;
	ft_print_int_array(array, n);
	while (array[0] <= (10 - n))
	{
		last_idx = n;
		array[last_idx - 1]++;
		while (last_idx)
		{
			last_idx--;
			if (array[last_idx] > 9)
			{
				array[last_idx - 1]++;
				array[last_idx] = 0;
			}
		}
		ft_print_int_array(array, n);
	}
}
