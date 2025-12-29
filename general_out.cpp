#include "geninc.hpp"

void	general_out(void)
{
	int	age = 42;
	int	favnum = 6;
	char	phrase[] = "Smile at least once a day, if not whats the point?";
	char	initial = 'D';

	printf("\n");
	printf("/************ General standard tests ************/\n");
	printf("\n");
	print(1, "Basic print, no value passed test");
	print(2, "Hello World, my I am %d years old.", age);
	print(3, "My favourite phrase is: %s", phrase);
	print(4, "I really like the integer %i.", favnum);
	print(5, "the initial of my second given name is '%c'.", initial);
	print(6, "this is a test for %% flag printing test");
	print(7, "mixed test with all '%%' flag symbols. My initial is %c and I am %i ages old- '%%'d check on number %d. may favourite phrase is %s, its pointer id is %p and -42 in hexa is %x. Lets not forget the unsigned int %u", initial, age, age, phrase, &phrase, -42, UINT_MAX);
	print(8, "pointer ref for string phrase: %p\n", &phrase);
	print(9, "Hexadecimal negative lower case: %x\n", 42);
	print(10, "Hexadecimal negative upper case: %X\n", 42);
	print(11, "Hexadecimal negative lower case: %x\n", -42);
	print(12, "Hexadecimal negative upper case: %X\n", -42);
	print(13, "Unsigned int check: %u\n", UINT_MAX);
}
