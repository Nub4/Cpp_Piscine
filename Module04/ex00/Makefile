NAME := ex00

SRCS_DIR := .

SRCS := main.cpp \
		Animal.cpp \
		Dog.cpp \
		Cat.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp

OBJ_DIR := objs

OBJECTS := $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

CXX := g++

RM := rm -f

CXXFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME): $(OBJ_DIR) $(OBJECTS)
	@echo "\033[1;33mBuilding ex00..\033[0m"
	@${CXX} ${CXXFLAGS} -o ${NAME} ${OBJECTS}
	@echo "\033[1;32mDONE!\033[0m"

clean:
	@echo "\033[1;31mRemoving object files..\033[0m"
	@${RM} ${OBJECTS}
	@rm -rf ${OBJ_DIR}

fclean: clean
	@echo "\033[1;31mRemoving launch file..\033[0m"
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re