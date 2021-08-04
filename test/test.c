#include <stdio.h>

int		ft_strlen(char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int		main(void)
{
	char	*s = NULL;

	if (!s)
		printf("null s\n");
	else
		printf("len : %d\n", ft_strlen(s));
}