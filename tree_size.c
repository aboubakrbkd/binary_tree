/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tree_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:30:49 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/06 16:52:35 by aboukdid         ###   ########.fr       */
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
