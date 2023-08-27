/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osif <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 17:09:50 by osif              #+#    #+#             */
/*   Updated: 2023/08/26 19:52:30 by osif             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src [b] != '\0')
	{
		b++;
		while ((a < size - 1) && src [a] != '\0')
		{
			dest [a] = src [a];
			a++;
		}
		if (size > 0)
		{
			dest [a] = '\0';
		}
	}
	return (b);
}
