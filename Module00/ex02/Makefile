.DEFAULT_GOAL := all

CPP = clang++ #c++

SRC = Account.cpp \
	tests.cpp

OBJ = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra

FLAG = -std=c++98

RM = rm -rf

NAME = tests

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(FLAG) $(OBJ) -o $@

%.o : %.cpp
	$(CPP) $(CFLAGS) $(FLAG) -c $< -o $@
	
clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : 
	make fclean
	make all

.PHONY: all clean fclean re