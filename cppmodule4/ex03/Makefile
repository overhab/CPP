NAME		=	interface
OBJS_DIR	=	./objs
SRCS_DIR	=	.

HEADERS		=	main.hpp			\
				AMateria.hpp		\
				Character.hpp		\
				Cure.hpp			\
				ICharacter.hpp		\
				Ice.hpp				\
				IMateriaSource.hpp	\
				MateriaSource.hpp	

SRC_FILES	=	main.cpp			\
				AMateria.cpp		\
				Character.cpp		\
				Cure.cpp			\
				Ice.cpp				\
				MateriaSource.cpp	
		
	

SRCS = $(addprefix $(SRCS_DIR)/, $(SRC_FILES))
OBJS = $(patsubst $(SRCS_DIR)/%.cpp,$(OBJS_DIR)/%.o, $(SRCS))
DEPS = $(OBJS:.o=.d)

CXXFLAGS		= -Wall -Wextra -Werror -std=c++98
CXXFLAGS_H		= -MMD -MP
RM				= rm -f
CXX				= clang++

all:		$(NAME)

-include $(DEPS)
$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HEADERS) | $(OBJS_DIR)
	${CXX} $(CXXFLAGS) $(CXXFLAGS_H) -c $< -o $@

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)

${NAME}: 	${OBJS}
	${CXX} $(CXXFLAGS) $(CXXFLAGS_H) -o ${NAME} ${OBJS}

clean:
				$(RM) $(OBJS) $(DEPS)
				rm -rf $(OBJS_DIR)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re
