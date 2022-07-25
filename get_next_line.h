/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkord <gkord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:46:31 by gkord             #+#    #+#             */
/*   Updated: 2022/04/20 16:22:12 by gkord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# define BUFFER_SIZE    1

char	*get_next_line(int fd);
char	*ft_null_antileak(char *res, char *buffer, char *line);
char	*ft_clear_line(char *res);
char	*ft_read_line(int fd, char *res);
int		ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_extract_line(char *res);
char	*ft_strchr(char *str, int c);

#endif
