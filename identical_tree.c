/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identical_tree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:46:40 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/06 20:33:01 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int check_if_the_same (t_tree **result1, t_tree **result2)
{
	t_tree *root1 = *result1;
	t_tree *root2 = *result2;
	if (!root1 && !root2)
		return (1);
	return (root1->value == root2->value
			&& check_if_the_same(&(root1)->left, &(root2)->left) + 1
			&& check_if_the_same(&(root1)->right, &(root2)->right) + 1);
}

// int main()
// {
// 	t_tree *root1 = NULL;
// 	t_tree *root2 = NULL;
	
// 	insert_tree(&root1, 1);
// 	insert_tree(&root1, 2);
// 	insert_tree(&root1, 3);
// 	insert_tree(&root1, 4);
	
// 	insert_tree(&root2, 1);
// 	insert_tree(&root2, 2);
// 	insert_tree(&root2, 3);
// 	insert_tree(&root2, 4);
// 	int check = check_if_the_same(&root1, &root2);
// 	if (check == 1)
// 		printf("the trees are identical\n");
// 	else
// 		printf("trees are not identical\n");
// }