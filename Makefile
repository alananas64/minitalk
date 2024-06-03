CC = cc
CFLAGS = -Wall -Werror -Wextra
SERVER = server
CLIENT = client
LIBFT = ./libft

all:
	@make -s -C $(LIBFT)
	@cc $(CFLAGS) libft/libft.a server.c -o $(SERVER)
	@cc $(CFLAGS) libft/libft.a client.c -o $(CLIENT)
	@echo "minitalk is ready"

clean:
	@make clean -s -C $(LIBFT)
	@echo "libft object files cleaned"

fclean: clean
	@rm -f $(SERVER) $(CLIENT)
	@make fclean -s -C $(LIBFT)
	@echo "cached cleared"

bkup:
	tar -cvf minitalkbk.tar *

norm:


re: fclean all
	@echo "remake minitalk"

