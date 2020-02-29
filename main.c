/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 17:21:17 by daelee            #+#    #+#             */
/*   Updated: 2020/02/26 17:45:23 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main ()
{
	char a[7];
	char b[7];

	printf("\n\nmemset\n");
	memset(a, 65, sizeof(a));
	ft_memset(b, 65, 7);
	printf("====> real <====\n");
	for(int i = 0; i < (sizeof(a)/sizeof(char)); i++)
	{
		printf("a[%d] = %c\n", i, a[i]);
	}
    	printf("====> yours <====\n");
	for(int i = 0; i < (sizeof(b)/sizeof(char)); i++)
	{
		printf("a[%d] = %c\n", i, b[i]);
	}
    int c[10];
    for(int i = -5; i < 5; i++)
	{
    memset(c, i, sizeof(c));
    printf("====> real <====\n");
    for(int i = 0; i < 10; i++)
		printf("%d ", c[i]);
    printf("\n");
    printf("====> yours <====\n");
    ft_memset(c, i, sizeof(c));
    for(int i = 0; i < 10; i++)
		printf("%d ", c[i]);
    printf("\n");
    }

	printf("\n\nbzero\n");
	int d[10];
    for(int i = -5; i < 5; i++)
	{
       	bzero(d, sizeof(d));
        printf("====> real <====\n");
        for(int i = 0; i < 10; i++)
			printf("%d ", d[i]);
        printf("\n");
		printf("====> yours <====\n");
        ft_bzero(d, sizeof(d));
        for(int i = 0; i < 10 ;i++)
			printf("%d ", d[i]);
        printf("\n");
    }

	printf("\n\nmemcpy\n");
	char e[10] = "abcde";
	char f[10] = "zzzzzz";
	char ee[10] = "abcde";
	char ff[10] = "zzzzzz";
	memcpy(e, f, 3);
	printf("====> real <====\n%s\n", e);
	ft_memcpy(ee, ff, 3);
	printf("====> yours <====\n%s\n", ee);

	printf("\n\nmemccpy\n");
	memccpy(e, f, 121, 7);
	printf("====> real <====\n%s\n", e);
	ft_memccpy(ee, ff, 121, 7);
	printf("====> yours <====\n%s\n", ee);

	printf("\n\nmemmove\n");
	char str[] = "1234ove can be very useful......";
	printf("====> yours <====\n");
	printf("%s\n", ft_memmove(str + 1, str + 0, 2));
	char str2[] = "1234ove can be very useful......";
	printf("====> real <====\n");
	printf("%s\n", memmove(str2 + 1, str2 + 0, 2));

	printf("\n\nmemchr\n");
	printf("====> real <====\n");
	printf("%s\n", memchr(str + 4, 'a', 4));
	printf("====> yours <====\n");
	printf("%s\n", ft_memchr(str + 4, 'a', 4));
	char aa[20] = "abcdefghijklmn";
	printf("====> yours <====\n");
	printf("%s\n", (char*)ft_memchr(aa, 'm', 18));
	printf("====> real <====\n");
	printf("%s\n", (char*)memchr(aa, 'm', 18));
}