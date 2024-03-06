/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_minimum_value.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:52:12 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/06 18:51:53 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"
#include <limits.h>


/*
	the binary tree always the left have value minimum than the root value
	and the right is the oppsoite;
*/
t_tree	*insert_tree(t_tree **result, int data)
{
	t_tree *root = *result;
	if (!root)
		return (*result = tree_creat(data));
	if (data <= root->value)
		root->left = insert_tree(&(root->left), data);
	else
		root->right = insert_tree(&(root->right), data);
	return (root);
}

int find_min_value(t_tree *root)
{
    if (!root)
        return 0;
    if (!root->left)
        return root->value;
    return find_min_value(root->left);
}

// int main()
// {
// 	t_tree *root = NULL;
// 	insert_tree(&root, 40);
// 	insert_tree(&root, 15);
// 	insert_tree(&root, 55);
// 	insert_tree(&root, 10);
// 	insert_tree(&root, 20);
	
// 	int min = find_min_value(root);
// 	printf("the min is: %d\n", min);
// }


