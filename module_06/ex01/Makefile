define compiling
	@printf 'Compiling %s\n' $1
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $1 -o $2
endef

define finishing
	@printf 'Finishing %s\n' $1
	@$(CXX) $(CXXFLAGS) $(CPPFLAGS) $2 -o $1 $(LIBS)
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

SRCS			= main.cpp

OBJS			= $(SRCS:.cpp=.o)

NAME			= cast

RM				= rm -f

CXX				= c++

CXXFLAGS		= -Wall -Wextra -Werror -g -std=c++98

CPPFLAGS		=

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
