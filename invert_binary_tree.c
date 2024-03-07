/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invert_binary_tree.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 14:12:41 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/07 14:35:58 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

void	ft_swap(t_tree **left, t_tree **right)
{
	t_tree	*swap;

	swap = *left;
	*left = *right;
	*right = swap;
}

t_tree *invertTree(t_tree *root)
{
	if (!root)
		return (NULL);
	invertTree(root->left);
	invertTree(root->right);
    ft_swap(&(root->left), &(root->right));
	return (root);
}

int main()
{
	t_tree *root = NULL;
	insert_tree(&root, 4);
	insert_tree(&root, 2);
	insert_tree(&root, 7);
	insert_tree(&root, 1);
	insert_tree(&root, 3);
	insert_tree(&root, 6);
	insert_tree(&root, 9);
	
	t_tree *result = invertTree(root);
	print_tree(result);
}