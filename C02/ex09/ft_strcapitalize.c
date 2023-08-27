/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osif <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:52:44 by osif              #+#    #+#             */
/*   Updated: 2023/08/26 13:02:43 by osif             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int	a;

	a = 0;
	while (str [a] != '\0')
	{
		if (str [a] >= 'A' && str [a] <= 'Z')
			str [a] += 32;
		a++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	ft_strlowercase(str);
	while (str [a] != '\0')
	{
		if (str [a] >= 'a' && str [a] <= 'z')
		{
			if (b == 1)
			{
				str [a] -= 32;
				b = 0;
			}
		}
		else if (str [a] >= '0' && str [a] <= '9')
			b = 0;
		else
			b = 1;
		a++;
	}
	return (str);
}
