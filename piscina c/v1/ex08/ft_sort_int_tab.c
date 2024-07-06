/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabaeza- <rabaeza-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 17:49:43 by rabaeza-          #+#    #+#             */
/*   Updated: 2024/06/26 17:50:11 by rabaeza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	unsorted;
	int	i;
	int	tmp;

	i = 1;
	unsorted = 1;
	while (unsorted)
	{
		unsorted = 0;
		i = 1;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				tmp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = tmp;
				unsorted = 1;
			}
			i++;
		}
	}
}
