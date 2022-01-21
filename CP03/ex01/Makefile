CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
NAME	= claptrap
OBJS	= main.o ClapTrap.o ScavTrap.o

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

clean:
	rm $(NAME) $(OBJS)

fclean: clean
	rm -f $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<