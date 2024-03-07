/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchBST.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 11:36:35 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/07 14:07:33 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

t_tree *searchBST(t_tree *root, int val)
{
	if (!root)
		return NULL;
	if (root->value == val)
		return (root);
	if (root->value > val)
		return searchBST(root->left, val);
	else
		return searchBST(root->right, val);
}

// int main()
// {
// 	t_tree *root = NULL;
// 	insert_tree(&root, 4);
// 	insert_tree(&root, 2);
// 	insert_tree(&root, 7);
// 	insert_tree(&root, 1);
// 	insert_tree(&root, 3);
	
// 	t_tree *result = searchBST(root, 2);
// 	print_tree(result);
// }