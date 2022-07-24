/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merlich <merlich@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:14:17 by merlich           #+#    #+#             */
/*   Updated: 2022/06/15 21:56:53 by merlich          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				std::cout << (char) (std::toupper(argv[i][j]));
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}
