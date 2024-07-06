/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabaeza- <rabaeza-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:29:30 by rabaeza-          #+#    #+#             */
/*   Updated: 2024/06/19 22:20:21 by rabaeza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	caunt;

	caunt = 97;
	while (caunt < 123)
	{
		write (1, &caunt, 1);
		caunt++;
	}
}



int main()
{
 ft_print_alphabet();
}
