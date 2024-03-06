/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_creat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:08:13 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/06 16:36:13 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

/*
	the degree of the tree is the number of sybstree has;
	binary trees have degree 0, 1, or 2;

*/
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

/*pre order traversal*/


