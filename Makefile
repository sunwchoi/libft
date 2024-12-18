# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sunwchoi <sunwchoi@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 15:18:01 by sunwchoi          #+#    #+#              #
#    Updated: 2023/07/25 15:42:36 by sunwchoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar
ARFLAGS = -rsc
RSCS_M =ft_isascii.c \
		ft_memcpy.c \
		ft_split.c \
		ft_strlcpy.c \
		ft_substr.c \
		ft_atoi.c \
		ft_isdigit.c \
		ft_memmove.c \
		ft_strchr.c \
		ft_strlen.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_isprint.c \
		ft_memset.c \
		ft_strdup.c \
		ft_strmapi.c \
		ft_toupper.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_putchar_fd.c \
		ft_striteri.c \
		ft_strncmp.c \
		ft_isalnum.c \
		ft_memchr.c \
		ft_putendl_fd.c \
		ft_strjoin.c \
		ft_strrchr.c \
		ft_isalpha.c \
		ft_memcmp.c \
		ft_putstr_fd.c \
		ft_strlcat.c \
		ft_strtrim.c \
		ft_strnstr.c \
		ft_putnbr_fd.c
RSCS_B =	ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstsize.c \
			ft_dlstadd_back.c \
			ft_dlstadd_front.c \
			ft_dlstclear.c \
			ft_dlstdelone.c \
			ft_dlstiter.c \
			ft_dlstlast.c \
			ft_dlstmap.c \
			ft_dlstnew.c \
			ft_dlstsize.c \
			ft_dlstgo.c \
			ft_dlstback.c
OBJS = $(RSCS_M:%.c=%.o)
OBJS_B = $(RSCS_B:%.c=%.o)

NAME = libft.a

ifdef BONUS_FLAG
	OBJS += $(OBJS_B)
endif

all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)


bonus :
	make BONUS_FLAG=1 all

clean :
	rm -rf $(OBJS) $(OBJS_B)

fclean : clean 
	rm -rf $(NAME)

re : fclean all
