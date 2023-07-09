/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:13:10 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/09 09:29:18 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	total = nb;
	i = 0;
	while (i++ < power - 1)
	{
		total *= nb;
	}
	return (total);
}
// #include <stdio.h>
// int main()
// {
	// printf("%d", ft_iterative_power(2, 10));
// }
