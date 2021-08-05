#include "../includes/ft_printf.h"
#include <stdio.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648
#define UINT_MAX 4294967295

int		main(void)
{
	int	f_len = 0;
	int	r_len = 0;
	int	i;

	i = 1337;

	f_len = ft_printf("%d\n", INT_MAX);
	r_len = printf("%d\n", INT_MAX);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%d\n", INT_MIN);
	r_len = printf("%d\n", INT_MIN);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%d\n", 0);
	r_len = printf("%d\n", 0);
	printf("Same ret: %d\n\n", f_len == r_len);
	
	
	f_len = ft_printf("%u\n", UINT_MAX);
	r_len = printf("%u\n", UINT_MAX);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%i\n", UINT_MAX);
	r_len = printf("%i\n", UINT_MAX);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%u\n", 0x0);
	r_len = printf("%u\n", 0x0);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%p\n", 0x0);
	r_len = printf("%p\n", 0x0);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%p %% %p\n", 0, 0);
	r_len = printf("%p %% %p\n", 0, 0);
	printf("Same ret: %d\n\n", f_len == r_len);

	f_len = ft_printf("%p %% %p\n", 0, NULL);
	r_len = printf("%p %% %p\n", 0, NULL);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%%xefefe %%xxxe %%ee\n");
	r_len = printf("%%xefefe %%xxxe %%ee\n");
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s\n", "xxx");
	r_len = printf("%s\n", "xxx");
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s\n", "xxx", "yyy");
	r_len = printf("%s\n", "xxx", "yyy");
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%x %% %%opopoop\n", 9090);
	r_len = printf("%x %% %%opopoop\n", 9090);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s\n", "");
	r_len = printf("%s\n", "");
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s\n", NULL);
	r_len = printf("%s\n", NULL);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%c xxxx %% %%\n", 0);
	r_len = printf("%c xxxx %% %%\n", 0);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s -> %c %% -> %d\n", "tessst", 65, 9090);
	r_len = printf("%s -> %c %% -> %d\n", "tessst", 65, 9090);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%pxxx%%\n", &i);
	r_len = printf("%pxxx%%\n", &i);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%pxxx%%\n", NULL);
	r_len = printf("%pxxx%%\n", NULL);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%pxxx%%\n", UINT_MAX);
	r_len = printf("%pxxx%%\n", UINT_MAX);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%pxxx%%\n", INT_MAX);
	r_len = printf("%pxxx%%\n", INT_MAX);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%pxxx%%\n", INT_MIN);
	r_len = printf("%pxxx%%\n", INT_MIN);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%c\n", INT_MIN);
	r_len = printf("%c\n", INT_MIN);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%c %c %c %c\n", INT_MIN);
	r_len = printf("%c %c %c %c\n", INT_MIN);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s_><<>%%\n", "OŒOŒOŒOŒOŒOŒOŒOŒOŒOŒOŒOŒOŒ");
	r_len = printf("%s_><<>%%\n", "OŒOŒOŒOŒOŒOŒOŒOŒOŒOŒOŒOŒOŒ");
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%u\n", NULL);
	r_len = printf("%u\n", NULL);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%rxxxxx%k%%%c\n", 65);
	r_len = printf("%rxxxxx%k%%%c\n", 65);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%rxxx%m%%%%%cxx%k%%%c\n", 65, 66);
	r_len = printf("%rxxx%m%%%%%cxx%k%%%c\n", 65, 66);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("_____ %c %% %%%X %p%% ddeded^^dd\t\n", 65, NULL);
	r_len = printf("_____ %c %% %%%X %p%% ddeded^^dd\t\n", 65, NULL);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("AbCdekoqoskDAKOdeiADIsdkkkKQD\tDOAkddd\n", 65, NULL);
	r_len = printf("AbCdekoqoskDAKOdeiADIsdkkkKQD\tDOAkddd\n", 65, NULL);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s // %s // %s // %% // %c\n", "test1", "test2", "test3", 65);
	r_len = printf("%s // %s // %s // %% // %c\n", "test1", "test2", "test3", 65);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s // %s // %s // %% // %c // %u\n", "test1", "test2", "test3", 65, UINT_MAX);
	r_len = printf("%s // %s // %s // %% // %c // %u\n", "test1", "test2", "test3", 65, UINT_MAX);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%s // %s // %s // %% // %c // %u\n", "test1", "test2", "test3", 65, INT_MIN, 9090);
	r_len = printf("%s // %s // %s // %% // %c // %u\n", "test1", "test2", "test3", 65, INT_MIN, 9090);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("");
	r_len = printf("");
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("", NULL);
	r_len = printf("", NULL);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%c\n", UINT_MAX);
	r_len = printf("%c\n", UINT_MAX);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%p %% %% %% %%\n", UINT_MAX);
	r_len = printf("%p %% %% %% %%\n", UINT_MAX);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%i %% %% %% %%blblblbl%c\n", UINT_MAX, 65);
	r_len = printf("%i %% %% %% %%blblblbl%c\n", UINT_MAX, 65);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%u %% %% %% %%blblblbl%c\n", UINT_MAX, 65);
	r_len = printf("%u %% %% %% %%blblblbl%c\n", UINT_MAX, 65);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%d %% %% %% %%blblblbl%c\n", INT_MAX, 65);
	r_len = printf("%d %% %% %% %%blblblbl%c\n", INT_MAX, 65);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%d %% %% %% %%blblblbl%c\n", INT_MIN, 65);
	r_len = printf("%d %% %% %% %%blblblbl%c\n", INT_MIN, 65);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%x %X %%\n", 1337);
	r_len = printf("%x %X %%\n", 1337);
	printf("Same ret: %d\n\n", f_len == r_len);
	

	f_len = ft_printf("%xxxxx%Xxxxx%%\n", 1337, 0);
	r_len = printf("%xxxxx%Xxxxx%%\n", 1337, 0);
	printf("Same ret: %d\n\n", f_len == r_len);
	
	return (0);
}
