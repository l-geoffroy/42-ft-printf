#include "ft_printf.h"
#include <stdio.h>
#include <sys/wait.h>

int		main(void)
{
	int	f_len;
	int	r_len;

	printf("\n\tTesting specifiers: c\n");

	f_len = ft_printf("%c\n", 'a');
	r_len = printf("%c\n", 'a');
	printf("Same ret: %d\n", f_len == r_len);
	usleep(100000);

	f_len = ft_printf("%c %c\n", 'a', 'b', 'c');
	r_len = printf("%c %c\n", 'a', 'b', 'c');
	printf("Same ret: %d\n", f_len == r_len);
	usleep(100000);

	f_len = ft_printf("%c - %c - %c\n", 'a');
	r_len = printf("%c - %c - %c\n", 'a');
	printf("Same ret: %d\n", f_len == r_len);
	usleep(100000);

	printf("\n\tTesting specifiers: s\n");

	f_len = ft_printf("%s\n", "");
	r_len = printf("%s\n", "");
	printf("Same ret: %d\n", f_len == r_len);
	usleep(100000);

	f_len = ft_printf("%s\n", "lolllll\n\tettesttes");
	r_len = printf("%s\n", "lolllll\n\tettesttes");
	printf("Same ret: %d\n", f_len == r_len);
	usleep(100000);

	f_len = ft_printf("%s\n", "1234", "4567");
	r_len = printf("%s\n", "1234", "4567");
	printf("Same ret: %d\n", f_len == r_len);
	usleep(100000);

	f_len = ft_printf("%s abc %s xdd %s\n", "1234", "4567");
	r_len = printf("%s abc %s xdd %s\n", "1234", "4567");
	printf("Same ret: %d\n", f_len == r_len);
	usleep(100000);

	printf("\n\tTesting specifiers: i\n");

	f_len = ft_printf("%i\n", "");
	r_len = printf("%i\n", "");
	printf("Same ret: %d\n", f_len == r_len);
	usleep(100000);
	
	return (0);
}
