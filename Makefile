# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yjung <yjung@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/25 12:14:00 by yjung             #+#    #+#              #
#    Updated: 2021/06/15 18:51:34 by yjung            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# CHECKER = checker
NAME = push_swap
# NAME = $(CHECKER) $(PUSH_SWAP)

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

OPER_SRC_DIR = $(SRC_DIR)/operation
OPER_SRC = $(wildcard $(OPER_SRC_DIR)/*.c)

SORT_SRC_DIR = $(SRC_DIR)/sort_func
SORT_SRC = $(wildcard $(SORT_SRC_DIR)/*.c)

UTIL_SRC_DIR = $(SRC_DIR)/util
UTIL_SRC = $(wildcard $(UTIL_SRC_DIR)/*.c)

SRCS = \
	$(wildcard $(SRC_DIR)/*.c)	\
	$(OPER_SRC)	\
	$(SORT_SRC)	\
	$(UTIL_SRC)

vpath %.c \
	$(SRC_DIR)	\
	$(OPER_SRC_DIR)	\
	$(SORT_SRC_DIR)	\
	$(UTIL_SRC_DIR)

OBJS = $(addprefix $(OBJ_DIR)/, $(notdir $(SRCS:.c=.o)))

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

$(NAME) : $(LIBFT_FILE) $(HEADERS) $(OBJS)
	@$(CC) $(CFLAGS) $(LIBFT_FLAGS) $(OBJS) -o $@

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
