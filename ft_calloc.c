/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 23:22:41 by ktaka             #+#    #+#             */
/*   Updated: 2022/01/06 23:22:42 by ktaka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*heap;

	if (SIZE_MAX / count < size)
		return (NULL);
	heap = malloc(count * size);
	if (heap == NULL)
		return (NULL);
	else
		ft_bzero(heap, count * size);
	return (heap);
}

// #include <stdio.h>

// int main(void)
// {
// 	char *ptr;
// 	int i;

// 	ptr = (char *)ft_calloc(500, sizeof(char));
// 	i = 0;
// 	if(ptr == NULL)
// 		printf("メモリが確保できません\n");
// 	while (i < 500)
// 	{
// 		printf("%d: [%c]\n", i, ptr[i]);
// 		i++;
// 	}
// 	free(ptr);
// 	return 0;
// }
