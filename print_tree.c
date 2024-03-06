/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_tree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:36:06 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/06 16:36:28 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	*print_tree(t_tree *root)
{
	if (!root)
		return (printf("-----<empty>----\n"), NULL);
	printf("the value is: %d\n", root->value);
	printf("left\n");
	print_tree(root->left);
	printf("right\n");
	print_tree(root->right);
	printf("done\n");
	return (NULL);
}
