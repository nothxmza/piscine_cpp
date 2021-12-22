NAME		=	 replace

SRC			=	main.cpp

FLAGS 		=	 -Wall -Wextra -Werror

CC			=	g++	$(FLAGS)

OBJ			=	$(SRC:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJ)
				$(CC) $(OBJ) $(FLAGS) -o $(NAME)

clean		:
				rm -rf $(OBJ)
fclean		:	clean
				rm -f $(NAME)
re			: 	fclean all