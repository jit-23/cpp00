NAME:=megaphone
FLAGS:= -g -Wall -Werror -Wextra -std=c++98
CC:= g++
SRC:= megaphone.cpp
OBJ:=$(patsubst %.cpp, %.o, $(SRC))

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${OBJ} ${FLAGS} -o ${NAME} 

clean:
	rm -f ${OBJ}
fclean: clean
	rm -f ${NAME}
re: fclean all

.PHONY: all re  fclean clean 
