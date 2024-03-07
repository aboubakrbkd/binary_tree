/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:10:41 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/07 11:56:22 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
#include <math.h>

typedef struct s_tree
{
	int				value;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_tree;

void	*print_tree(t_tree *root);
t_tree	*tree_creat(int value);
int		tree_size(t_tree *root);
int find_min_value(t_tree *root);
t_tree	*insert_tree(t_tree **result, int data);
#endif