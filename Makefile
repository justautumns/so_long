
NAME = so_long
CC = cc
FLAGS = -Wall -Werror -Wextra -g
MLXFLAGS	=	-L ./minilibx -lmlx -Ilmlx -lXext -lX11
LIBFT = ./libft/libftprintf.a
LIBFTDIR = ./libft
MINILIBX_PATH	=	./minilibx
MINILIBX		=	$(MINILIBX_PATH)/libmlx.a
SRC = src/game_validations.c \
		src/render_img.c \
		src/get_size_map.c \
		src/main.c \
		src/end_game.c \
		src/init_map.c \
		src/game_moves.c \
		src/get_maps.c \
		src/start_validations.c \
		src/path_validation.c

OBJ = $(SRC:%.c=%.o)

GREEN		:=	\033[1;32m
RED			:=	\033[1;31m
WHITE		:=	\033[1;37m
BOLD		:=	\033[1;1ms

all: ${NAME}

${NAME}: $(OBJ)
	$(MAKE) --no-print-directory -C $(MINILIBX_PATH)
	@echo "$(GREEN) Minilibix has been created Emre welldone. $(BOLD)"
	$(MAKE) -C $(LIBFTDIR)
	$(CC) $(FLAGS) -lm $(SRC) $(MLXFLAGS) $(LIBFT) -o $(NAME)
	@echo "$(GREEN) ./so_long has been created Emre welldone $(BOLD)"

clean:
	$(MAKE) clean -C ./libft
	@rm -rf $(OBJ)
	@echo "$(RED) object files deleted Emre are u getting away?.$(BOLD)"

fclean: clean
	$(MAKE) fclean -C ./libft
	@rm -rf $(NAME) $(OBJ)
	@echo "$(RED) all deleted Emre.$(BOLD)"

re: fclean all

.PHONY: all clean fclean re
