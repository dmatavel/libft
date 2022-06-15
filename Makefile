SRCS = ft_isalnum.c ft_isalpha.c ft_isdigit.c ft_isascii.c \
	   ft_isprint.c ft_tolower.c  ft_toupper.c  ft_memchr.c \
	   ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	   ft_strchr.c ft_strdup.c ft_strlen.c  ft_strncmp.c \
	   ft_strrchr.c ft_strlcat.c ft_strlcpy.c ft_strnstr.c \
	   ft_bzero.c ft_calloc.c ft_atoi.c ft_putchar_fd.c \
	   ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strjoin.c \
	   ft_substr.c ft_striteri.c ft_strtrim.c \
	   ft_itoa.c ft_split.c

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
