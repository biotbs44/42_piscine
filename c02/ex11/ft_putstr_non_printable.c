/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:52:02 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 17:53:20 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_char_printable(char c)
{
	if (c >= 32 && c != 127)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	curr;
	int				index;

	index = 0;
	while (1)
	{
		curr = str[index];
		if (curr == '\0')
			break ;
		if (is_char_printable(curr))
			ft_putchar(curr);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[curr / 16]);
			ft_putchar("0123456789abcdef"[curr % 16]);
		}
		index++;
	}
}
