/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osif <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:23:07 by osif              #+#    #+#             */
/*   Updated: 2023/09/02 18:30:48 by osif             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	b;

	if (nb <= 1)
	{
		return (0);
	}
	b = 2;
	while (b * b <= nb)
	{
		if (nb % b == 0)
			return (0);
		b++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb == 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
