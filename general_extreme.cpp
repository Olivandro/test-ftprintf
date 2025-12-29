#include "geninc.hpp"

void	general_extreme(void)
{
	printf("\n");
	printf("/************ General extreme tests ************/\n");
	printf("\n");
	print(1, "%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
	print(2, "%x\n", 0);
	print(3, "%x\n", LONG_MIN);
	print(4, "%p\n", 0);
}
