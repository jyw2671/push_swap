# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 12:14:00 by yjung             #+#    #+#              #
#    Updated: 2021/06/23 19:28:49 by yjung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CHECKER = checker
PUSH_SWAP = push_swap
NAME = $(CHECKER) $(PUSH_SWAP)

AR = ar
ARFLAGS = crs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

RM = rm
RMFLAGS = -rf

INC_DIR = include
CFLAGS += -I $(INC_DIR)
SRC_DIR = src
OBJ_DIR = obj

# libft
LIBFT = libft.a
LIBFT_DIR = libft
LIBFT_FILE = $(LIBFT_DIR)/$(LIBFT)
LIBFT_INC_DIR = $(LIBFT_DIR)/include
LIBFT_FLAGS = -L./$(LIBFT_DIR) -lft
CFLAGS += -I $(LIBFT_INC_DIR)

HEADERS = $(wildcard $(INC_DIR)/*.h)

CHECKER_SRC_DIR = $(SRC_DIR)/checker
CHECKER_SRC = $(wildcard $(CHECKER_SRC_DIR)/*.c)

PUSH_SWAP_SRC_DIR = $(SRC_DIR)/push_swap
PUSH_SWAP_SRC = $(wildcard $(PUSH_SWAP_SRC_DIR)/*.c)

UTIL_SRC_DIR = $(SRC_DIR)/util
UTIL_SRC = $(wildcard $(UTIL_SRC_DIR)/*.c)

PUSH_SWAP_SRC += $(UTIL_SRC)
CHECKER_SRC += $(UTIL_SRC)

vpath %.c \
	$(SRC_DIR)	\
	$(PUSH_SWAP_SRC_DIR)	\
	$(CHECKER_SRC_DIR)	\
	$(UTIL_SRC_DIR)

PUSH_SWAP_OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(PUSH_SWAP_SRC:.c=.o)))
CHECKER_OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(CHECKER_SRC:.c=.o)))

all : $(NAME)

clean :
	@$(RM) $(RMFLAGS) $(OBJS) $(OBJ_DIR)

fclean : clean lib_fclean
	@$(RM) $(RMFLAGS) $(NAME)

re : fclean all

$(OBJ_DIR) :
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.c $(LIBFT_FILE) | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(CHECKER) : $(LIBFT_FILE) $(HEADERS) $(CHECKER_OBJS) $(SRC_DIR)/checker.c
	@$(CC) $(CFLAGS) $(LIBFT_FLAGS) $(CHECKER_OBJS) $(SRC_DIR)/checker.c -o $@

$(PUSH_SWAP) : $(LIBFT_FILE) $(HEADERS) $(PUSH_SWAP_OBJS) $(SRC_DIR)/push_swap.c
	@$(CC) $(CFLAGS) $(LIBFT_FLAGS) $(PUSH_SWAP_OBJS) $(SRC_DIR)/push_swap.c -o $@

# lib
lib : libft
lib_fclean : libft_fclean
lib_re : lib_fclean lib

# libft
libft : $(LIBFT_FILE)

$(LIBFT_FILE) :
	@make --no-print-directory -C $(LIBFT_DIR)

libft_re :
	@make --no-print-directory -C $(LIBFT_DIR) re

libft_clean :
	@make --no-print-directory -C $(LIBFT_DIR) clean

libft_fclean :
	@make --no-print-directory -C $(LIBFT_DIR) fclean


.PHONY: all clean fclean re bonus \
	lib lib_re	\
	libft libft_clean libft_fclean
