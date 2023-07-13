/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:30:43 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/10 13:44:16 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function calculates the power of a number recursively.
 * 
 * @param nb The base number that will be raised to the power.
 * @param power The power parameter represents the exponent to which the base
 * number (nb) is raised.
 * 
 * @return the result of raising the number `nb` to the power `power`.
 */
int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_recursive_power(5, 3));
// }
