/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:19:24 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/09 09:50:46 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function calculates the factorial of a given number using an iterative
 * approach.
 * 
 * @param nb The parameter "nb" represents the number for which we want to
 * calculate the factorial.
 * 
 * @return the factorial of the input number.
 */
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	total;

	if (nb < 0)
	{
		return (0);
	}
	total = 1;
	i = 0;
	while (i++ < nb)
	{
		total *= i;
	}
	return (total);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_iterative_factorial(10));
// }
