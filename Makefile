SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
	   ft_isprint.c ft_strchr.c ft_strlcat.c ft_strlcpy.c \
	   ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c \
	   ft_toupper.c ft_memset.c

OBJS = $(SRCS:.c=.o)
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar -rc $(NAME)  $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS)


.PHONY: all clean fclean re
