#include "printf.h"

int	ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}