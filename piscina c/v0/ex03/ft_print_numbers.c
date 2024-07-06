/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabaeza- <rabaeza-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 22:57:10 by rabaeza-          #+#    #+#             */
/*   Updated: 2024/06/19 23:11:26 by rabaeza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_numbers(void)
{
	char	caunt;

	caunt = 48;
	while (caunt < 58)
	{
		write (1, &caunt, 1);
		caunt++;
	}
}
