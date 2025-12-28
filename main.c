#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"

int	main(void)
{
	int	nulltest;
	int	age = 42;
	int	favnum = 6;
	char	phrase[] = "Smile at least once a day, if not whats the point?";
	char	initial = 'D';

	ft_printf("\n");
	ft_printf("/************ ft_printf tests ************/\n");
	ft_printf("\n");
	ft_printf("Basic print, no value passed test\n");
	ft_printf("Hello World, my I am %d years old.\n", age);
	ft_printf("My favourite phrase is: %s\n", phrase);
	ft_printf("I really like the integer %i.\n", favnum);
	ft_printf("the initial of my second given name is '%c'.\n", initial);
	ft_printf("this is a test for %% flag printing test\n");
	ft_printf("mixed test with all '%%' flag symbols. My initial is %c and I am %i ages old- '%%'d check on number %d. may favourite phrase is %s, its pointer id is %p and -42 in hexa is %x. Lets not forget the unsigned int %u\n", initial, age, age, phrase, &phrase, -42, UINT_MAX);

	nulltest = ft_printf(NULL);
	ft_printf("null test = %i.\n", nulltest);

	ft_printf("pointer ref for string phrase: %p\n", &phrase);
	ft_printf("Hexadecimal negative lower case: %x\n", 42);
	ft_printf("Hexadecimal negative upper case: %X\n", 42);
	ft_printf("Hexadecimal negative lower case: %x\n", -42);
	ft_printf("Hexadecimal negative upper case: %X\n", -42);
	ft_printf("Unsigned int check: %u\n", UINT_MAX);

	ft_printf("\n");

	printf("/************ printf tests ************/\n");
	printf("\n");
	printf("Basic print, no value passed test\n");
	printf("Hello World, my I am %d years old.\n", age);
	printf("My favourite phrase is: %s\n", phrase);
	printf("I really like the integer %i.\n", favnum);
	printf("the initial of my second given name is '%c'.\n", initial);
	printf("this is a test for %% flag printing test\n");
	printf("mixed test with all '%%' flag symbols. My initial is %c and I am %i ages old- '%%'d check on number %d. may favourite phrase is %s, its pointer id is %p and -42 in hexa is %x. Lets not forget the unsigned int %u\n", initial, age, age, phrase, &phrase, -42, UINT_MAX);

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
	printf("Unsigned int check: %u\n", UINT_MAX);

	printf("\n");
	printf("/************ Bonus tests: padding ************/\n");
	printf("\n");
	printf("Print out for ' ' flag:% d:test\n", 42);
	printf("Print out for ' ' flag:% d:test\n", -42);
	printf("print of for '-' flag: %-50d:test\n", 42);
	printf("print out for the '0' flag: %#45x:test\n", 42);
	printf("\n");
	printf("/************ Bonus tests: percision ************/\n");
	printf("\n");
	printf("Percision test 1: %#-.8x\n", age);
	printf("Percision test 2: %.10d\n", age);
	printf("Percision test 3: %.10s\n", phrase);
	printf("Percision test 4: %.12u\n", UINT_MAX);
	printf("Percision test 5: %#45.8x\n", -42);
	printf("\n");
	printf("/************ Bonus tests: '#' & '+' flag ************/\n");
	printf("\n");
	printf("'+' flag test 1: %+d\n", age);
	printf("'+' flag test 2: %+d\n", -24);
	printf("'+' flag test 3: %+45.10d\n", 24);
	printf("Hexadecimal with '#' flag: %#x\n", age);
	printf("\n");
	printf("/************ Bonus tests: mixing the flags test ************/\n");
	printf("\n");
	printf("# flag with padding test 1: %#10x\n", age);
	printf("# flag with padding test 2: %#-10x\n", age);
	printf("# flag with padding & percision test 1: %#.8x\n", age);
	printf("# flag with padding & percision -less percise- test 2: %#.6x\n", -42);
	printf("+ flag with percision test 1: %+.10d\n", age);
	printf("+ flag with padding and percision test 1: %+-50.10d:to be padded\n", age);
	printf("+ flag with padding and percision test 2: %+50.10d\n", age);
	printf("String padding and percision test 1:%6.5s\n", phrase);
	printf("String padding and percision test 2: %-6.5sbecause\n", phrase);



	printf("\n");
	int count = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n");
	printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	printf("\n");
	ft_printf("%d", count);
	printf("\n");
	ft_printf("%x\n", 0);
	ft_printf("%x\n", LONG_MIN);
	printf("%lx\n", LONG_MIN);
	printf("%p\n", 0);
	printf("%s\n", NULL);
	return (0);
}
