# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboumall <aboumall42@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/13 15:52:18 by aboumall          #+#    #+#              #
#    Updated: 2025/10/03 02:00:17 by aboumall         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

TARGET = unnecessaryviolence

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(TARGET) $(HEADERS)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
