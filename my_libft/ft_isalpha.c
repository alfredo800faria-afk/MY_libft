#include "libft.h"
/*
 	ft_isalpha() return 1 if character is alphabetic
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
