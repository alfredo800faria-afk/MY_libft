#include "libft.h"
#include <stdio.h>

int	ft_ataoi(char *s);
void	show_alpha(char *s);
void	show_isdigit(char *s);
void	show_isalnum(char *s);
void	show_isascii(char *s);
void	show_isprint(char *s);
void	show_tolower(char *s);
void	show_toupper(char *s);
size_t	ft_strlen(const char *s);

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		show_alpha(argv[1]);
		show_isdigit(argv[1]);
		show_isalnum(argv[1]);
		show_isascii(argv[1]);
		show_isprint(argv[1]);
		show_tolower(argv[1]);
		show_toupper(argv[1]);
	}
	return (0);
}

int	ft_ataoi(char *s)
{
	int	i;
	int	res;
	
	i = 0;
	res = 0;
	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * 1);
}

void	show_alpha(char *s)
{
		if (ft_isalpha(ft_ataoi(s)))
			printf("True is Alpha\n");
		else
			printf("Is not Alpha\n");
}

void	show_isdigit(char *s)
{
		if (ft_isdigit(ft_ataoi(s)))
			printf("True is isdigit\n");
		else
			printf("Is not isdigit\n");
}

void	show_isalnum(char *s)
{
		if (ft_isalnum(ft_ataoi(s)))
			printf("True is isalnum\n");
		else
			printf("Is not isalnum\n");
}

void	show_isascii(char *s)
{
		if (ft_isascii(ft_ataoi(s)))
			printf("True is Ascii\n");
		else
			printf("Is not Aascii\n");
}

void	show_isprint(char *s)
{
		if (ft_isprint(ft_ataoi(s)))
			printf("True is Printable\n");
		else
			printf("Is not Printable\n");
}

void	show_tolower(char *s)
{
	char	c;

	c = ft_tolower(ft_ataoi(s));
	if (ft_tolower(ft_ataoi(s)))
		printf("True is lower case %c\n", c);
	else
		printf("Is not lower case\n");
}

void	show_toupper(char *s)
{
	char	c;

	c = ft_toupper(ft_ataoi(s));
	if (ft_toupper(ft_ataoi(s)))
		printf("True is lower case %c\n", c);
	else
		printf("Is not lower case\n");
}
