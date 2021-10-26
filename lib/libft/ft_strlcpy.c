/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: avan-ber <avan-ber@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:26:56 by avan-ber      #+#    #+#                 */
/*   Updated: 2020/06/26 18:24:10 by avan-ber      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t i_len;

	i = 0;
	i_len = 0;
	if (src == 0)
		return (0);
	while (src[i_len] != '\0')
		i_len++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i + 1 < dstsize)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (i_len);
}
