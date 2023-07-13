/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 10:35:35 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/13 11:35:21 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

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
	int	result;
	int	remove;

	i = 0;
	result = nb;
	remove = 1;
	while (result > 0)
	{
		result -= remove;
		remove += 2;
		i++;
	}
	if (result != 0)
	{
		return (0);
	}
	return (i);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_sqrt(8));
// }