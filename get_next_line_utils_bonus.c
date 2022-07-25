/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 18:46:22 by gkord             #+#    #+#             */
/*   Updated: 2021/12/18 18:09:56 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s2)
		return ((char *)s1);
	if (!s1)
		new_str = malloc(sizeof(char) * ft_strlen(s2) + 1);
	else
		new_str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_str)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
			new_str[j++] = s1[i++];
		free (s1);
	}
	i = 0;
	while (s2[i])
		new_str[j++] = s2[i++];
	new_str[j] = '\0';
	return (new_str);
}

char	*ft_extract_line(char *res)
{
	int		i;
	char	*line;

	i = 0;
	if (!res[i])
		return (NULL);
	while (res[i] && res[i] != '\n')
		i++;
	line = (char *)malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (res[i] && res[i] != '\n')
	{
		line[i] = res[i];
		i++;
	}
	if (res[i] == '\n')
	{
		line[i] = res[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*ft_strchr(char *str, int c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
			return ((char *)(str + i));
		i++;
	}
	if (c == 0)
		return ((char *)(str + i));
	return (NULL);
}
