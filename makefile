# *****************************************************************
CC        := cc
CFLAGS    := -Wall -Wextra -Werror -g

# *****************************************************************
RM    := rm -f
AR    := ar rcs

# *****************************************************************
TESTDIR    := test

# *****************************************************************
NAME    := libft.a
SRCS    := $(wildcard *.c)
SRCS_bonus    := $(wildcard *.c)
OBJS    := $(SRCS:.c=.o)
OBJS_bonus    := $(SRCS_bonus:.c=.o)
TEST    := $(TESTDIR)/main.c
OUTPUT    := $(TESTDIR)/a.out

# *****************************************************************
all:    $(NAME) test

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus:	$(OBJS) $(OBJS_bonus)
	@$(AR) $(NAME)  $(OBJS) $(OBJS_bonus)
.c.o:
	@$(CC) $(CFLAGS) -o $@ -c $<


test:
	@$(CC) $(CFLAGS) $(TEST) -L. -lft -o $(OUTPUT)
	@./$(OUTPUT)


clean:
	$(RM) $(OBJS) $(OUTPUT)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re test
