/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:35:31 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/16 19:01:22 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# define INTMAX 2147483647
# define INTMIN -2147483648

typedef struct s_stack
{
	int				nbr;
	int				index;
	int				cost;
	bool			over_med;
	bool			cheap;
	struct s_stack	*target;			
	struct s_stack	*next;
}	t_stack;

int			main(int argc, char **argv);
long		ft_atol(const char *str);
void		ft_error(void);
int			ft_check_int(char *str);
int			ft_check_size(char *str);
t_stack		*ft_one_arg(char **argv);
t_stack		*ft_multiple_args(int argc, char **argv);
void		ft_create_astack(t_stack **a, char **tab);
void		ft_add_back(t_stack **stack, t_stack *stack_new);
void		*ft_addvalue_stack(int newnbr);
bool		ft_check_if_sort(t_stack *a);
int			ft_check_for_dup(t_stack *a);
void		ft_free_stack(t_stack **stack);
int			ft_stack_size(t_stack *stack);

t_stack		*ft_last_node(t_stack *stack);
t_stack		*ft_beforelast_node(t_stack *stack);
t_stack		*ft_get_min_node(t_stack *stack);
t_stack		*ft_get_max_node(t_stack *stack);

void		ft_push(t_stack **dst, t_stack **src);
void		ft_pb(t_stack **b, t_stack **a);
void		ft_pa(t_stack **a, t_stack **b);

void		ft_swap(t_stack **stack);
void		ft_sa(t_stack **a);
void		ft_sb(t_stack **b);
void		ft_ss(t_stack **a, t_stack **b);

void		ft_rotate(t_stack **stack);
void		ft_ra(t_stack **a);
void		ft_rb(t_stack **b);
void		ft_rr(t_stack **a, t_stack **b);

void		ft_rev_rotate(t_stack **stack);
void		ft_rra(t_stack **a);
void		ft_rrb(t_stack **b);
void		ft_rrr(t_stack **a, t_stack **b);

void		ft_get_index(t_stack *stack);
t_stack		*ft_get_cheap_node(t_stack *stack);
void		ft_move_node_top(t_stack **stack, t_stack *node, char name);
void		ft_get_min_top(t_stack **a);

void		ft_fill_nodes_a(t_stack *a, t_stack *b);
void		ft_get_atarget(t_stack *a, t_stack *b);
void		ft_get_cost(t_stack *a, t_stack *b);
void		ft_find_cheap_node(t_stack *stack);

void		ft_fill_nodes_b(t_stack *a, t_stack *b);
void		ft_get_btarget(t_stack *a, t_stack *b);
void		ft_get_bcost(t_stack *a, t_stack *b);

void		ft_sort(t_stack **a);
void		ft_sort_three(t_stack **a);
void		ft_sort_stacks(t_stack **a, t_stack **b);
void		ft_a_to_b(t_stack **a, t_stack **b);
void		ft_arotate_both(t_stack **a, t_stack **b, t_stack *cheapest);
void		ft_arev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest);
void		ft_b_to_a(t_stack **a, t_stack **b);
void		ft_brotate_both(t_stack **a, t_stack **b, t_stack *bcheapest);
void		ft_brev_rotate_both(t_stack **a, t_stack **b, t_stack *bcheapest);

#endif