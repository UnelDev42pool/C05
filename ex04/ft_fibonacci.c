/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 09:47:18 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/09 10:32:32 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function calculates the Fibonacci number at a given index using recursion
 * 
 * @param index The parameter index represents the position of desired number
 * in the Fibonacci sequence. For example, if "index" is 0, the function will
 * return the first number in the Fibonacci sequence, which is 0. If index is 1,
 * the function will return the second number
 * 
 * @return the Fibonacci number at the given index.
 */
int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_fibonacci(15));
// }
