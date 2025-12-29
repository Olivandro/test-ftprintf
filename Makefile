SRC = main.cpp general_out.cpp general_extreme.cpp #print.cpp

CC = clang++ 
CFLAGS = -std=c11 -std=c++11 -Wno-everything -g 
INC = -I../ -I./ 
INCLIB = -L../ 
LDFLAG = -ldl -lftprintf 

NAME = ft_printf

REMOVE = rm -rf

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS)	$(INC) $(INCLIB) $(SRC) -o $(NAME) $(LDFLAG)

clean:
	$(REMOVE) $(NAME)
	$(REMOVE) *.dSYM

re: clean $(NAME)

.Phony: all clean re
