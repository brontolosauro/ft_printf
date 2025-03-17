NAME = libftprintf.a

SRC =	ft_printf.c ft_vprintf.c ft_parse_convspec.c ft_print_arg.c \
		ft_conv_char.c ft_conv_str.c ft_conv_ptr.c ft_conv_int.c \
		ft_conv_uint.c ft_conv_hex.c ft_conv_chex.c ft_conv_percent.c \
		ft_uitoa.c ft_xitoa.c


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
