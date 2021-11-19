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
SRCS    := 	ft_calloc.c ft_isdigit.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c ft_memchr.c	ft_memset.c	ft_putstr_fd.c	ft_striteri.c	ft_strlen.c	ft_strrchr.c ft_toupper.c \
				ft_isalnum.c ft_isprint.c ft_lstclear_bonus.c ft_lstmap_bonus.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strjoin.c ft_strmapi.c ft_strtrim.c \
				ft_atoi.c ft_isalpha.c ft_itoa.c ft_lstdelone_bonus.c ft_lstnew_bonus.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcat.c ft_strncmp.c ft_substr.c \
				ft_bzero.c ft_isascii.c ft_lstadd_back_bonus.c ft_lstiter_bonus.c ft_lstsize_bonus.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c \
OBJS    := $(SRCS:.c=.o)
OBJS_bonus    := $(SRCS_bonus:.c=.o)
TEST    := $(TESTDIR)/main.c
OUTPUT    := $(TESTDIR)/a.out

# *****************************************************************
all:    $(NAME) test

$(NAME):	$(OBJS)
	$(AR) $(NAME) $(OBJS)

# bonus:	$(OBJS) $(OBJS_bonus)
#	@$(AR) $(NAME)  $(OBJS) $(OBJS_bonus)
%.o: %.c
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
