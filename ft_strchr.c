/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktaka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 23:15:09 by ktaka             #+#    #+#             */
/*   Updated: 2022/04/23 12:02:19 by ktakada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	chr;
	size_t	i;

	str = (char *)s;
	chr = (char)c;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			return (str + i);
		i++;
	}
	if (chr == '\0')
		return (str + i);
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	test1_normal_case(void);
void	test2_no_occur_case(void);
void	test3_several_times_occur_case(void);
void	test4_c_0_case(void);
void	test5_include_0_case(void);
void	test6_str_null_case(void);

int main(void)
{
	test1_normal_case();
	test2_no_occur_case();
	test3_several_times_occur_case();
	test4_c_0_case();
	test5_include_0_case();
	test6_str_null_case();
	return (0);
}

void	test1_normal_case(void)
{
	char	*str = "Hello, 42 world!";
	int		c = '4';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("///test1_normal_case///\n");
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test2_no_occur_case(void)
{
	char	*str = "Hello, 42 world!";
	int		c = '?';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test2_no_occur_case///\n");
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strchr---\n");
		printf("No occurrence\n");
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test3_several_times_occur_case(void)
{
	char	*str = "Hello, 42 world!";
	int		c = ' ';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test3_several_times_occur_case///\n");
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test4_c_0_case(void)
{
	char	*str = "Hello, 42 world!";
	int		c = '\0';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test4_c_0_case///\n");
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test5_include_0_case(void)
{
	char	*str = "Hello,\0 42 world!";
	int		c = '4';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test5_include_0_case///\n");
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else if (strcmp(ori_ret, ft_ret) == 0)
	{
		printf("---after strchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}

void	test6_str_null_case(void)
{
	char	*str = NULL;
	int		c = 'a';
	char	*ori_ret = NULL;
	char	*ft_ret = NULL;

	printf("\n///test6_str_null_case///\n");
	printf("---before strchr---\n");
	printf("str:\t%s\nc:\t%c\n", str, (char)c);
	printf("***THIS CASE IS SEGV***\n");
	ori_ret = strchr(str, c);
	ft_ret = ft_strchr(str, c);
	if (ori_ret == NULL && ft_ret == NULL)
	{
		printf("---after strchr---\n");
		printf("%s\n", ft_ret);
		printf("OK :)\n");
	}
	else
	{
		printf("NG :(\n");
		exit (0);
	}
	return ;
}
*/
