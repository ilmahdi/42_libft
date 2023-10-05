/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:27:37 by eabdelha          #+#    #+#             */
/*   Updated: 2021/11/06 12:22:43 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ps1;
	const unsigned char	*ps2;

	ps1 = s1;
	ps2 = s2;
	while (n-- > 0)
	{
		if (*ps1 != *ps2)
			return ((int)(*ps1 - *ps2));
		ps1++;
		ps2++;
	}
	return (0);
}
/*int main() {

    int array1 [] = { 54, 85, 20, 63, 21 };
    int array2 [] = { 54, 85, 19, 63, 21 };
    size_t size = sizeof( int ) * 5;

    assert( memcmp( array1, array2, size) == ft_memcmp( array1, array2, size) );
    assert( memcmp( array1, array1, size) == ft_memcmp( array1, array1, size) );
    assert( memcmp( array2, array1, size) == ft_memcmp( array2, array1, size) );

    printf( "Test is ok\n" );

    return 0;
}*/
