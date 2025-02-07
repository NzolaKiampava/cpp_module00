# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkiampav <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/29 16:34:18 by nkiampav          #+#    #+#              #
#    Updated: 2025/01/29 16:34:20 by nkiampav         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

cpp: megaphone.cpp
	$(CXX) $(CXXFLAGS) megaphone.cpp -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean