#include <stdlib.h>
#include <string.h>
#include <stdio.h>


size_t	ft_strlen(const char *s)
{
	size_t	l;

	l = 0;
	while (s[l])
		l++;
	return (l);
}
void	ft_strclr(char *s)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (i < ft_strlen(s))
	{
		s[i] = '\0';
		i++;
	}
}

int main(void)
{
	char *s = malloc(10);
	memset(s, 'u', 9);
	printf("%s\n", s);
	ft_strclr(s);
	printf("after: %s\n", s);
	return (0);
}
