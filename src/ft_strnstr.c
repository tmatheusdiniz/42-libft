/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreinald <mreinald@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 18:32:25 by mreinald          #+#    #+#             */
/*   Updated: 2024/11/10 00:00:41 by mreinald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;

	if ((!big || !little) && len == 0)
		return (NULL);
	i = 0;
	little_len = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big != '\0' && len -- > 0 && i < len - little_len)
	{
		if (*big == *little)
			if (!ft_memcmp(big, little, little_len))
				return ((char *)big);
		big ++;
	}
	return (NULL);
}
