#include "libft.h"

int	ft_isalnum(int a)
{
	if (a > 47 && a < 58)
		return (1);
	if (a > 64 && a < 91)
		return (1);
	if (a > 96 && a < 123)
		return (1);
	return (0);
}
