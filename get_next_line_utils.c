/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:22:23 by sasano            #+#    #+#             */
/*   Updated: 2023/10/11 00:02:34 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *tmp, char *buffer)
{
	char	*str;
	int		i;
	int		j;

	str = malloc(sizeof(char) * (ft_strlen(tmp) + ft_strlen(buffer) + 1));
	if (!str)
		return (NULL);
	i = 0;
	if (tmp)
	{
		while (tmp[i])
		{
			str[i] = tmp[i];
			i++;
		}
		free(tmp);
	}
	j = 0;
	while (buffer[j])
	{
		str[i++] = buffer[j++];
	}
	str[i] = '\0';
	return (str);
}

int	judge_read(char *tmp)
{
	if (!tmp)
		return (1);
	while (*tmp)
	{
		if (*tmp == '\n')
			return (0);
		tmp++;
	}
	return (1);
}

char	*take_out_line(char *tmp)
{
	int		i;
	char	*line;

	i = 0;
	if (!tmp[i])
		return (NULL);
	while (tmp[i] && tmp[i] != '\n')
		i++;
	line = malloc(sizeof(char) * (i + 1));
	if (!line)
		return (NULL);
	i = 0;
	while (tmp[i] != '\n' && tmp[i] != '\0')
	{
		line[i] = tmp[i];
		i++;
	}
	if (tmp[i] == '\n')
	{
		line[i] = tmp[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*new_tmp(char *tmp)
{
	int		i;
	int		j;
	char	*new_tmp;

	i = 0;
	while (tmp[i] && tmp[i] != '\n')
		i++;
	if (!tmp[i])
	{
		free(tmp);
		return (NULL);
	}
	i++;
	new_tmp = malloc(sizeof(char) * (ft_strlen(tmp) - i + 1));
	if (!new_tmp)
		return (NULL);
	j = 0;
	while (tmp[i])
		new_tmp[j++] = tmp[i++];
	new_tmp[j] = '\0';
	free(tmp);
	return (new_tmp);
}
