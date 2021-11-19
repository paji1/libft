#include "../libft.h"

int main()
{
	 t_list *l = ft_lstnew(strdup("nyacat"));
	t_list *n = ft_lstnew(strdup("OK"));
	ft_lstadd_back(&l, n);
	while (l)   
	{
		printf("%s\n", (char *) l->content);
		l = l->next;
	}
}