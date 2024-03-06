/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:08:13 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/06 12:50:03 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_tree	*tree_creat(int value)
{
	t_tree	*result;

	result = malloc(sizeof(t_tree));
	if (!result)
		return (NULL);
	result->left = NULL;
	result->right = NULL;
	result->value = value;
	return (result);
}

/*pree order traversal*/

void	print_tree(t_tree *root)
{
	if (!root)
	{

		printf("-----<empty>----\n");
		return ;
	}
	printf("the value is: %d\n", root->value);
	printf("left\n");
	print_tree(root->left);
	printf("right\n");
	print_tree(root->right);
	printf("done\n");
}
int	main(void)
{
	t_tree *node1 = tree_creat(10);
	t_tree *node2 = tree_creat(15);
	t_tree *node3 = tree_creat(14);
	t_tree *node4 = tree_creat(13);
	t_tree *node5 = tree_creat(12);
	t_tree *node6 = tree_creat(17);
	t_tree *node7 = tree_creat(20);
	
	
	node1->left = node2;
	node1->right = node3;
	
	node3->left = node4;
	node3->right = node5;
	
	node2->left = node6;
	node2->right = node7;
	print_tree(node1);
}
