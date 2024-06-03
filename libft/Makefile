NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFILES =ft_atoi.c\
		ft_printf.c\
		ft_putchar.c\
		ft_puthexalower.c\
		ft_puthexaupper.c\
		ft_putnbr.c\
		ft_putpointer.c\
		ft_putstring.c\
		ft_putunsignedint.c\
		ft_strlen.c

OFILES = $(CFILES:.c=.o)

all: $(NAME)

$(NAME) : $(OFILES)
	@ar -rcs $(NAME) $(OFILES)

clean:
	rm -fr $(OFILES)

fclean:clean
	rm -fr $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
