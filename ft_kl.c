/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kl.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kfalia-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 19:50:19 by kfalia-f          #+#    #+#             */
/*   Updated: 2018/10/28 23:08:57 by kfalia-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_kl(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] != '.')
				k++;
			j++;
		}
		i++;
	}
	if (k < 17)
		return (0);
	return (1);
}
