NAME = libftprintf.a

SRC = ft_printf.c
		
OBJ = $(SRC:%.c=%.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar
ARFLAGS = rcs

.PHONY : all clean fclean re

all : $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT) 

$(NAME) : libftprintf.h $(OBJ) $(LIBFT)
	ar rcs $(NAME) $(OBJ)

clean :
	$(MAKE) -C $(LIBFT_DIR) clean
	rm -f $(OBJ)
	
fclean : clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	rm -f $(NAME)

re : fclean all
