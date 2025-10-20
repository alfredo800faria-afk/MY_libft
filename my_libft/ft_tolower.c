#include "libft.h"

/*Linux man page: tolower() converts the letter c to lower case, if possible.*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (0);
}
