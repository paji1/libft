#include "../libft.h"

int main()
{
	char **tbb = ft_split("                          m vl ",' ');
	printf("%s",tbb[2]);
	free(tbb);
}