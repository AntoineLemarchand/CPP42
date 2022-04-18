define compiling
	@printf 'Compiling %s\n' $1
	@$(CC) $(CFLAGS) $(CPPFLAGS) -c $1 -o $2
endef

define finishing
	@printf 'Finishing %s\n' $1
	@$(CC) $(CFLAGS) $(CPPFLAGS) $2 -o $1 $(LIBS)
endef

define cleaning
	@echo -n Cleaning
	@printf '%s\n' $1
	@make $2 -sC $1 > /dev/null
endef

define removing
	@printf ' %s ' $1
	@$(RM) $1 > /dev/null
	@printf '\n'
endef

SRCS			= $(addprefix srcs/, \
				  Animal.cpp \
				  Dog.cpp \
				  main.cpp \
				  )

OBJS			= $(SRCS:.cpp=.o)

NAME			= a.out

RM				= rm -f

CC				= g++

CFLAGS			= -Wall -Wextra -Werror -g -fsanitize=address -std=c++98

CPPFLAGS		= -I includes

LIBS			= 

%.o : %.cpp
				$(call compiling,$<,$(<:.cpp=.o),0)

${NAME}:		$(OBJS)
				$(call finishing,$(NAME), $(OBJS))

all:			$(NAME)

clean:	
				@echo -n Removing
				$(call removing,$(OBJS))

fclean:			clean
				@echo -n Removing
				$(call removing,$(NAME))

re:				fclean all
