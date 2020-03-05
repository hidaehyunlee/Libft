/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 20:52:40 by daelee            #+#    #+#             */
/*   Updated: 2020/03/05 02:17:03 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_getstart(const char *s1, const char *set)
{
    int i;
    char *temp;

    i = 0;
    while (s1[i])
    {
        if (ft_strchr(set, s1[i]) == 0)
            break ;
        i++;
    }
    return (i);
}

int     ft_getend(const char *s1, const char *set)
{
    int len;

    len = ft_strlen(s1);
    while (len)
    {
        if (ft_strchr(set, s1[len - 1]) == 0)
            break ;
        len--;
    }
    return (len);
}

char    *ft_strtrim(char const *s1, char const *set)
{ 
    int start;
    int end;
    char *newstr;

    if (!s1)
        return (ft_strdup(""));
    start = ft_getstart(s1, set);
    end = ft_getend(s1, set);
    newstr = (char *)malloc(sizeof(char) * (end - start + 1) + 1);
    if (newstr == NULL)
        return (NULL);
    ft_strlcpy(newstr, s1 + start, end - start + 1);
    return(newstr);
}

int     main()
{
    char *s1 = "  ABCCBA  "; 
    char *set1 = "";
    //résultat : "ABCCBA";
    char *s2 = "ACCBACBA"; 
    char *set2 = "AB";
    //résultat : "CCBAC";
    char *s3 = "Hello World!";  
    char *set3 = "Hlde";
    //résultat : "o World!"
    printf("1..%s\n2..%s\n3..%s\n", ft_strtrim(s1, set1), ft_strtrim(s2, set2), ft_strtrim(s3, set3));
    return (0);
}