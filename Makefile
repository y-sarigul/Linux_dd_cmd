# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msarigul <msarigul@student.42kocaeli.com.  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:02:09 by msarigul          #+#    #+#              #
#    Updated: 2022/12/28 11:22:39 by msarigul         ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

NAME				:= dd.a 

OBJDIR			:= obj
LIBFT				:= $(OBJDIR)/libft.a
UTILS 			:= $(OBJEDIR)/utils.a
CC					:= cc
CFLAGS			:= -Wall -Wextra -Werror -I ./inc

$(NAME): $(OBJDIR) $(LIBFT)
	@ar -rcs $(NAME) $(OBJDIR)/*.o 

$(OBJDIR):
	@echo "Creating objects file"
	@mkdir -p $(OBJDIR)

$(LIBFT):
	@echo "Libft creating"
	@make -C ./lib/libft

# $(UTILS):
# 	@echo "Utils creating"
# 	@make -C src/utils 

all: $(NAME)

clean:
	@rm -f $(OBJDIR)/*.o

fclean: clean
	@rm -f $(NAME)
	@rm -rf $(OBJDIR)
	@rm dd.a

re: fclean all

m:
	@gcc ./src/main.c dd.a -o main -I ../inc 
	@./main if=test.txt of=test2.txt
	@rm main

.PHONY: all re clean fclean m
