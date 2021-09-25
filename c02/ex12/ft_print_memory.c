/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jungyang <jungyang@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:53:55 by jungyang          #+#    #+#             */
/*   Updated: 2021/09/25 21:07:30 by jungyang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	char_to_print;
	unsigned int	offset;

	offset = 0;
	while (size > 0)
	{
		if (size >= 16)
		{

