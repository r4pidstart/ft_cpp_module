# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 12:48:31 by tjo               #+#    #+#              #
#    Updated: 2023/01/14 01:57:47 by tjo              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = test
C++ = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic -g3 -ggdb -fsanitize=address

G++ = g++-12
G++FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic

SRCS_FOLDER = ./
SRCS = main.cpp Fixed.cpp bsp.cpp Point.cpp

all: $(NAME)

$(NAME): $(addprefix $(SRCS_FOLDER), $(SRCS:.cpp=.o))
	$(C++) $(CXXFLAGS) -o ./$(NAME) $(SRCS:.cpp=.o)

%.o: %.cpp
	$(C++) $(CXXFLAGS) -c $^ -o $@

bonus:
	$(MAKE) BONUS=1

cppver:
	@$(MAKE) fclean -s
	$(G++) $(G++FLAGS) -o ./$(NAME) $(SRCS)
	./$(NAME)
	@$(MAKE) fclean -s

clean:
	rm -rf */*.o
	rm -rf *.o
	
fclean: clean
	rm -rf $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: bonus all clean fclean re