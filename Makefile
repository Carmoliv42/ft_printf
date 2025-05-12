NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
SCRS = ft_printf.c \

OBJS = $(SCRS:.c=.o)
AR = ar rcs

#MAIN_SRC = "Name Function"
#EXEC = ./a.out

$(EXEC): $(MAIN_SRC) $(NAME)
	$(CC) $(CFLAGS) $(MAIN_SRC) $(NAME) -o $(EXEC)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME) $(EXEC)

run: $(EXEC)
	./$(EXEC)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME) $(EXEC)

re: fclean all