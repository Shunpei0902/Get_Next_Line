/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sasano <shunkotkg0141@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:57:29 by sasano            #+#    #+#             */
/*   Updated: 2023/10/11 00:07:35 by sasano           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/* # ifndef BUFFER_SIZE
# define BUFFER_SIZE 1
#endif */

char	*get_next_line(int);
char	*get_line(int, char *);
void	error(char *, char *);
int		judge_read(char *);
char	*take_out_line(char *);
char	*ft_strjoin(char *, char *);
char	*new_tmp(char *);

#endif