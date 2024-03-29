SRCS		= 	ft_isalnum.c	\
				ft_isalpha.c	\
				ft_isascii.c	\
				ft_isdigit.c	\
				ft_isprint.c	\
				ft_atoi.c		\
				ft_bzero.c		\
				ft_calloc.c		\
				ft_memchr.c		\
				ft_memcmp.c		\
				ft_memcpy.c		\
				ft_memmove.c	\
				ft_memset.c		\
				ft_strchr.c		\
				ft_strdup.c		\
				ft_strlcat.c	\
				ft_strlcpy.c	\
				ft_strlen.c		\
				ft_strncmp.c	\
				ft_strnstr.c	\
				ft_strrchr.c	\
				ft_tolower.c	\
				ft_toupper.c	\
				ft_substr.c		\

OBJS		= ${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

GCC			= gcc

RM			= rm -f

NAME		= libft.a

.c.o:		${GCC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}
			@echo "libft has compiled succesfully"

all:		${NAME}

clean:		
			${RM} ${OBJS}
			@echo ".o's have been cleaned."

fclean:		clean
			${RM} ${NAME}
			@echo "libft has been completely cleaned."

re:			fclean all

.PHONY:		all clean fclean re