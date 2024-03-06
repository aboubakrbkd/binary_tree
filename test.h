/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboukdid <aboukdid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:10:41 by aboukdid          #+#    #+#             */
/*   Updated: 2024/03/06 16:52:53 by aboukdid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_tree
{
	int				value;
	struct s_tree	*left;
	struct s_tree	*right;
}					t_tree;

void	*print_tree(t_tree *root);
t_tree	*tree_creat(int value);
int		tree_size(t_tree *root);
#endif