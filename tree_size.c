/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:30:49 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/06 16:44:13 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int tree_size(t_tree *root)
{
	if (!root)
		return 0;
	int left = tree_size(root->left);
	int right = tree_size(root->right);
	int sum = left + right  + 1;
	return (sum);
}
int main()
{
	t_tree *node1 = tree_creat(1);
	t_tree *node2 = tree_creat(2);
	t_tree *node3 = tree_creat(3);
	t_tree *node4 = tree_creat(4);
	t_tree *node5 = tree_creat(5);
	
	node1->left = node2;
	node1->right = node3;
	
	node2->left = node4;
	node2->right = node5;
	
	
	int size = tree_size(node1);
	printf("the size is: %d\n", size);
	//print_tree(node1);
}