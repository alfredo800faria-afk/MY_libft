
#include "libft.h"
/* checks for an alphanumeric character; it is equivalent 
 * to (isalpha(c) || isdigit(c)). */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}
