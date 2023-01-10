# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 12:48:31 by tjo               #+#    #+#              #
#    Updated: 2023/01/11 01:58:26 by tjo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g3 -ggdb -fsanitize=address

SRCS_FOLDER = ./

SRCS = tests.cpp Account.cpp

# ifdef BONUS
# endif

all: $(NAME)

$(NAME): $(addprefix $(SRCS_FOLDER), $(SRCS:.cpp=.o))
	c++ $(CPPFLAGS) -o ./$(NAME) $(SRCS:.cpp=.o)

%.o: %.cpp
	c++ $(CPPFLAGS) -c $^ -o $@

bonus:
	$(MAKE) BONUS=1

clean:
	rm -rf */*.o
	rm -rf *.o
	# make clean -C $(LIBFT_SRCS)
	
fclean: clean
	rm -rf $(NAME)
	# make fclean -C $(LIBFT_SRCS)

re:
	# make re -C $(LIBFT_SRCS)
	$(MAKE) fclean
	$(MAKE) all

.PHONY: bonus all clean fclean re