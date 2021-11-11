# ****************************** Compiler Options ******************************
CC        := cc
CFLAGS    := -Wall -Wextra -Werror

# ******************************* Other commands *******************************
RM    := rm -f
AR    := ar rcs

# ******************************** Directories *********************************
TESTDIR    := test

# *********************************** Files ************************************
NAME    := libft.a
SRCS    := $(wildcard *.c)
OBJS    := $(SRCS:.c=.o)
TEST    := $(TESTDIR)/main.c
OUTPUT    := $(TESTDIR)/a.out

# ********************************** Targets ***********************************
all:    $(NAME) test

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -o $@ -c $<

test:
	$(CC) $(CFLAGS) $(TEST) -L. -lft -o $(OUTPUT)
	./$(OUTPUT)

clean:
	$(RM) $(OBJS) $(OUTPUT)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re test
