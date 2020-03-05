CC		= gcc
INC		= ./include
CFLAGS	= -Wall -Werror -Wextra -I$(INC)

SRCS	= $(wildcard src/*.c)
OBJS	= $(SRCS:.c=.o)

TARGET	= libft

all : $(TARGET)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(TARGET)

run :
	./$(TARGET)

test : $(TARGET) run fclean

re : fclean all
	rm -f $(OBJS)
norm :
	@norminette -R CheckForbiddenSourceHeader $(SRCS) $(INC)