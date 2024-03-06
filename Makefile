CC = cc
CFLAGS = -Wall -Wextra -Werror -g
RM = rm -rf
NAME = tree
SRCS = tree_size.c tree_creat.c print_tree.c find_minimum_value.c identical_tree.c
OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	 $(CC)  $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

%.o: %.c test.h
	$(CC) $(CFLAGS) -c $<
	
clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all