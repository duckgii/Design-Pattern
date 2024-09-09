CC = c++
NAME = a.out
CFLAGS = -fsanitize=address -g3 #-MMD -MP
SRCS = main.cpp \
		FlyBehavior.cpp \
		QuackBehavior.cpp \
		Duck.cpp
SRCS_OBJS = main.o \
			FlyBehavior.o \
			QuackBehavior.o \
			Duck.o

all : $(NAME)

clean :
	rm -f $(SRCS_OBJS)

fclean : clean
	rm -f $(NAME)

re:
	make fclean
	make all

$(NAME) : $(SRCS_OBJS)
		$(CC) $(CFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

.PHONY : all clean fclean re