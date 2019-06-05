/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgalyeon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/26 05:26:20 by rgalyeon          #+#    #+#             */
/*   Updated: 2019/06/05 13:50:41 by rgalyeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include "./libft/includes/libft.h"
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# define BUFF_SIZE 1
# define POS ((t_buf *)tmp->data)->pos
# define BUF ((t_buf *)tmp->data)->buf

typedef struct	s_buf
{
	char	*buf;
	ssize_t	cap;
	ssize_t	pos;
}				t_buf;

int				get_next_line(const int fd, char **line);

#endif
