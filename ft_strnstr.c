/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 16:01:36 by eabdelha          #+#    #+#             */
/*   Updated: 2021/11/10 18:11:40 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{	
	size_t	i;
	size_t	r;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		r = 0;
		while ((i + r) < len && haystack[i + r] && haystack[i + r] == needle[r])
		{
			if (needle[r + 1] == '\0')
			{
				return ((char *)((haystack + i)));
			}
			r++;
		}
		i++;
	}
	return (NULL);
}
/*int main() 
{
    //char array1 [30] = "look at this magic";
	//char array2 [9] = "";
	//int size = 20;
	char	*s1 = "MZIRIBMZIRIBMZE123";
			char	*s2 = "MZIRIBMZE";
			size_t	max = strlen(s2);
		char	*i1 = strnstr(s1, s2, max);
		char	*i2 = ft_strnstr(s1, s2, max);
		printf("%s\n",i2);

    printf( "%s\n",i1 );

    return 0;
}*/
