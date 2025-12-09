SRC = main.c

OBJ = $(SRC:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror -g 
INC = -I../ 
INCLIB = -L../ 
LDFLAG = -lftprintf 

NAME = ft_printf

REMOVE = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS)	$(INCLIB) $(OBJ) -o $(NAME) $(LDFLAG)

%.o:%.c
	$(CC) $(CFLAGS) $(INC) -c $< -o $(<:%.c=%.o)

clean:
	$(REMOVE) $(OBJ) $(NAME)

re: clean $(NAME)

.Phony: all clean re
