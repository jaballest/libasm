/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jballest <jballest@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/27 15:53:37 by jballest          #+#    #+#             */
/*   Updated: 2020/09/04 00:05:51 by jballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>


size_t  ft_strlen(char *str);
size_t  ft_write(int fd, const void *buf, size_t count);
size_t	ft_read(int fd, void *buf, size_t count);
int     ft_strcmp(char *dest, const char *src);
char    *ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s);

#endif