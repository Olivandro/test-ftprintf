#include <stdio.h>
#include "ft_printf.h"

int	main(void)
{
	int	nulltest;
	int	age = 42;
	int	favnum = 6;
	char	phrase[] = "Smile at least once a day, if not whats the point?";
	char	initial = 'D';

	ft_printf("/************ ft_printf tests ************/\n");
	ft_printf("Basic print, no value passed test\n");
	ft_printf("Hello World, my I am %d years old.\n", age);
	ft_printf("My favourite phrase is: %s\n", phrase);
	ft_printf("I really like the integer %i.\n", favnum);
	ft_printf("the initial of my second given name is '%c'.\n", initial);

	nulltest = ft_printf(NULL);
	ft_printf("null test = %i.\n", nulltest);

	ft_printf("pointer ref for string phrase: %p\n", &phrase);
	ft_printf("Hexadecimal negative lower case: %x\n", 42);
	ft_printf("Hexadecimal negative upper case: %X\n", 42);
	ft_printf("Hexadecimal negative lower case: %x\n", -42);
	ft_printf("Hexadecimal negative upper case: %X\n", -42);

	ft_printf("\n");

	printf("/************ printf tests ************/\n");
	printf("Basic print, no value passed test\n");
	printf("Hello World, my I am %d years old.\n", age);
	printf("My favourite phrase is: %s\n", phrase);
	printf("I really like the integer %i.\n", favnum);
	printf("the initial of my second given name is '%c'.\n", initial);

#ifdef __linux__
	/* This test does not work on Mac OSX */
	nulltest = printf(NULL);
	printf("null test = %i.\n", nulltest);
#endif

	printf("pointer ref for string phrase: %p\n", &phrase);
	printf("Hexadecimal lower case: %x\n", age);
	printf("Hexadecimal upper case: %X\n", age);
	printf("Hexadecimal negative lower case: %x\n", -42);
	printf("Hexadecimal negative upper case: %X\n", -42);

	printf("\n");

	return (0);
}
