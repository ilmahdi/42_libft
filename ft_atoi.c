/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 15:54:46 by eabdelha          #+#    #+#             */
/*   Updated: 2021/11/10 19:03:36 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long	i;
	int		s;
	long	res;

	res = 0;
	i = 0;
	s = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while ((str[i] - '0') >= 0 && (str[i] - '0') <= 9)
	{
		res = (10 * res) + (str[i] - '0');
		i++;
	}
	return (res * s);
}
/*int main() {
	char array0[10]="    884";
	char array1[20]="+0 66766";
	char array2[30]="   +454";
    assert( atoi(array0) == ft_atoi(array0) );
    assert( atoi(array1) == ft_atoi(array1) );
    assert( atoi(array2) == ft_atoi(array2) );
    printf( "Test is ok\n" );
	printf("%d\n",atoi("-99999999999999999999999999"));
	printf("%d\n",ft_atoi("-99999999999999999999999999"));
    return 0;

}*/
