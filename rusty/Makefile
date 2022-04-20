NAME=rusty
CLANG=clang++
FLAGS=-Wall -Werror -Wextra
LIBNAME=weblib.a
AR=ar
FLAGS=-Wall -Werror -Wextra
INCLUDES=includes/
SRCS = rusty.cpp
HRCS = includes/main.hpp
OBJS = $(SRCS:.cppo)

all: $(NAME)

$(NAME): $(LIBNAME)
	$(CLANG) $(FLAGS) -g -o $(NAME) $(LIBNAME)

$(LIBNAME): $(OBJS)
	$(AR) rc $(LIBNAME) $(OBJS)

$(OBJS): $(SRCS) $(HRCS)
	$(CLANG) $(FLAGS) -c -g -o $@ $< -I $(INCLUDES)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(LIBNAME)
	rm -rf $(NAME)

re: fclean all
