#include <stdio.h>
#include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if(!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	ft_lstsize(t_list *lst)
{
	if(lst == 0)
		return (0);
	else
		return (1 + ft_lstsize(lst->next));
}

void	print_list(t_list *head)
{
	t_list	*current;

	current = head;
	printf("List contents: ");
	while (current != NULL)
	{
		printf("%d -> \n", *(int *)current->content);
		current = current->next;
	}
}

void	free_list(t_list *head)
{
	t_list	*current;
	t_list	*next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->content);
		free(current);
		current = next;
	}
}

int main(void)
{
	int	*num1 = malloc (sizeof(int));
	int	*num2 = malloc (sizeof(int));
	int	*num3 = malloc (sizeof(int));

	*num1 = 42;
	*num2 = 23;
	*num3 = 12;

	t_list *node1 = ft_lstnew(num1);
	t_list *node2 = ft_lstnew(num2);
	t_list *node3 = ft_lstnew(num3);
	
	node1->next = node2;
	node2->next = node3;

	print_list(node1);
	printf("%d\n", ft_lstsize(node1));
	free_list(node1);

	return (0);
}