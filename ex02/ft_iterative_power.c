/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:13:10 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/10 13:44:18 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function `ft_iterative_power` calculates the power of a number using an
 * iterative approach.
 * 
 * @param nb The parameter "nb" represents the base number that will be raised to
 * the power.
 * @param power The "power" parameter represents the exponent to which the "nb"
 * parameter will be raised.
 * 
 * @return the result of raising the number `nb` to the power `power`.
 */
int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	total = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (i++ < power)
	{
		total *= nb;
	}
	return (total);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_iterative_power(10, 0));
// }
