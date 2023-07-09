/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:35:35 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/09 10:57:25 by edi-iori         ###   ########lyon.fr   */
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
	if (nb == 0 && power == 0)
		return (1);
	if (power == 1)
		return (nb);
	return (nb * ft_recursive_power(nb, power - 1));
}

/**
 * The function `ft_sqrt` calculates the square root of a given number.
 * 
 * @param nb The parameter "nb" represents the number for which we want to find
 * the square root.
 * 
 * @return the square root of the input number.
 */
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (nb > ft_recursive_power(i, 2))
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_sqrt(64));
// }