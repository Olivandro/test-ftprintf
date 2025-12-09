#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	nulltest;
	int	age = 42;
	int	favnum = 6;
	char	phrase[] = "Smile at least once a day, if not whats the point?";
	char	initial = 'D';

	ft_printf("/************ ft_printf tests ************/");
	ft_printf("Basic print, no value passed test\n");
	ft_printf("Hello World, my I am %d years old.\n", age);

	printf("/************ printf tests ************/");
	printf("Basic print, no value passed test\n");
	printf("Hello World, my I am %d years old.\n", age);
	printf("My favourite phrase is: %s\n", phrase);
	printf("I really like the integer %i.\n", favnum);
	printf("the initial of my second given name is '%d'.\n", initial);
	nulltest = printf(NULL);
	printf("null test = %i.\n", nulltest);

	printf("This is a no pass var test - %d\n");
	return (0);
}
