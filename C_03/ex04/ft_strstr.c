/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarcos- <fmarcos-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 17:39:32 by fmarcos-          #+#    #+#             */
/*   Updated: 2020/12/04 19:31:37 by fmarcos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(char *str, char *to_find)
{
    int c;
    int t;
    int l;
    char *finded;
    char list[50];

    finded = &list[0];
    c = 0;
    t = 0;
    l = 0;
    while (str[c] != '\0')
    {
        while (to_find[t] != '\0') 
        {    
            if (str[c] == to_find[t] && to_find[t] != '\0')
            {
                list[l] = str[c];
                c++;
                t++;
                l++;
            }
            else
            {
                c++;
                t = 0;
                l = 0;
            }
        }
    list[l] = str[c];
    c++;
    l++;
    }
    list[l] = '\0';
    return (finded);
}
