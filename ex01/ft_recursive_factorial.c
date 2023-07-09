/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 22:49:09 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/09 09:50:46 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function calculates the factorial of a given number using recursion.
 * 
 * @param nb The parameter "nb" represents the number for which we want to
 * calculate the factorial.
 * 
 * @return the factorial of the given number 'nb'.
 */
int	ft_recursive_factorial(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		return (nb * ft_recursive_factorial(nb -1));
	}
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_recursive_factorial(10));
// }
