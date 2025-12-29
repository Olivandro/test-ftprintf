#ifndef GENINC_HPP
#define GENINC_HPP

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h> 
#include <signal.h>
#include <sys/wait.h>
#include <sstream>
extern "C"
{
	#include "ft_printf.h"
}

#define B_SIZE 4096
# define TIMEOUT_US 100000


void	general_out(void);
void	general_extreme(void);

template<typename... Args>
void	print(int test_num, const char *s, Args... args)
{

	int	showTest = 0;
	int	pipeOut, stdOut;
	pid_t	actualTest = fork(); stdOut = 1;
	setbuf(stdout, NULL);
	if (actualTest < 0)
	{
		printf("I have dropped my fork");
		exit(EXIT_FAILURE);
	}

	else if (actualTest == 0)
	{
		char	printfStr[B_SIZE], ft_printfStr[B_SIZE];
		//int		printfRet, ft_printfRet;
		char	eof = EOF; 
		int		readReturn;
		int		p[2];

		if (pipe(p) < 0)
		{
			printf("pipe() failed");
			exit(EXIT_FAILURE);
		}
		stdOut = dup(1); pipeOut = p[1]; dup2(pipeOut, 1);
		bzero(printfStr, B_SIZE), bzero(ft_printfStr, B_SIZE);
		printf(s, args...); write(1, &eof, 1);
		if ((readReturn = read(p[0], printfStr, B_SIZE)) < 0)
		{
			printf("read failed");
			exit(EXIT_FAILURE);
		}
		ft_printf(s, args...); write(1, &eof, 1);
		if ((readReturn = read(p[0], ft_printfStr, B_SIZE)) < 0)
		{
			printf("read failed");
			exit(EXIT_FAILURE);
		}
		close(p[0]); close(pipeOut); dup2(stdOut, 1);
		if (!strcmp(ft_printfStr, printfStr))
			printf("Test %d: PASS\n", test_num);
		else
			printf("Test %d: FAIL\n", test_num);
		showTest = 1;
		exit(EXIT_SUCCESS);
	}
	else
	{
		usleep(TIMEOUT_US); int status;
		if (waitpid(actualTest, &status, WNOHANG) == 0)
		{
			kill(actualTest, 9);
		//	if (showTest)
		//		cout << FG_BLUE << "ft_printf: " << FG_RED << "[TIMEOUT]" << ENDL;
		//	else
		//		cout << FG_RED << iTest << ".TIMEOUT ";
		}
		if (showTest)
			exit(EXIT_SUCCESS);
	}	
}

#endif
