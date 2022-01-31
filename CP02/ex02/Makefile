CC		= clang++
CFLAGS	= -Wall -Wextra -Werror 
NAME	= fixed
OBJS	= main.o Fixed.o

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<
