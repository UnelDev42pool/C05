/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-iori <edi-iori@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:09:26 by edi-iori          #+#    #+#             */
/*   Updated: 2023/07/13 15:09:30 by edi-iori         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sub;
	int	temp;

	i = 0;
	sub = 1;
	temp = nb;
	while (temp > 0)
	{
		temp -= sub;
		sub += 2;
		i++;
	}
	if (i * i != nb)
	{
		return (i + 1);
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	max;

	if (nb <= 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	max = ft_sqrt(nb);
	while (i < max)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
	{
		if (nb <= 0)
			return (2);
		else
			nb++;
	}
	return (nb);
}
