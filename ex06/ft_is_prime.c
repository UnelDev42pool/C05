/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:00:20 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/09 11:28:34 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
	int	prime;
	int	i;

	i = 2;
	prime = 1;
	while(i < nb)
	{
		if(nb % i == 0)
		{
			prime = 0;
			break;
		}
		i++;
	}
	if(prime == 1 && nb>0 && nb !=1)
		return (1);
	else
		return (0);
}
// #include <stdio.h>
// int main()
// {
// 	printf("%d", ft_is_prime(97));
// }
