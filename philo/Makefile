

CC = cc
CFLAG = -Wall -Wextra -Werror -g3 #-fsanitize=address

FILE = ckeck_arg.c \
		philo.c \
		run_phil.c \
		creat_philo.c\
		mini_lib1.c\
		function_philo.c

NAME = philo
OBJ = $(FILE:.c=.o)

	

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAG) -lpthread $(OBJ) -o $@
%.o:%.c
	$(CC) $(CFLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re : fclean all
.PHONY: all re fclean clean 