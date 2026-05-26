##
## EPITECH PROJECT, 2025
## Zappy
## File description:
## GUI Makefile
##

# Binary
NAME		=	zappy_gui

# Compiler & flags
CXX			=	g++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++20
CXXFLAGS	+=	-I./include

# SFML — links graphics, window, system, and network for TCP socket
LDFLAGS		=	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-network

# Directories
SRC_DIR		=	src
OBJ_DIR		=	obj
INC_DIR		=	include

# Sources — adjust paths to match your actual file tree
SRCS		=	$(SRC_DIR)/main.cpp							\
# 				$(SRC_DIR)/network/Connection.cpp			\
# 				$(SRC_DIR)/network/Parser.cpp				\
# 				$(SRC_DIR)/network/CommandBuffer.cpp		\
# 				$(SRC_DIR)/core/App.cpp						\
# 				$(SRC_DIR)/core/EventHandler.cpp			\
# 				$(SRC_DIR)/render/Renderer.cpp				\
# 				$(SRC_DIR)/render/Camera.cpp				\
# 				$(SRC_DIR)/render/TileView.cpp				\
# 				$(SRC_DIR)/render/PlayerView.cpp			\
# 				$(SRC_DIR)/render/ResourceView.cpp			\
# 				$(SRC_DIR)/render/EggView.cpp				\
# 				$(SRC_DIR)/render/HUD.cpp					\
# 				$(SRC_DIR)/state/GameState.cpp				\
# 				$(SRC_DIR)/state/WorldMap.cpp				\
# 				$(SRC_DIR)/state/PlayerState.cpp			\
# 				$(SRC_DIR)/state/TeamState.cpp				\
# 				$(SRC_DIR)/utils/Args.cpp					\
# 				$(SRC_DIR)/utils/Logger.cpp

OBJS		=	$(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))

# Colors
RED			=	\033[0;31m
GREEN		=	\033[0;32m
YELLOW		=	\033[0;33m
CYAN		=	\033[0;36m
RESET		=	\033[0m

.PHONY: all clean fclean re debug

##
## BUILD RULES
##

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(CYAN)[GUI]$(RESET) Linking $(YELLOW)$(NAME)$(RESET)..."
	@$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)
	@echo "$(GREEN)[✓]$(RESET) $(NAME) ready."

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	@echo "$(CYAN)[GUI]$(RESET) Compiling $<..."
	@$(CXX) $(CXXFLAGS) -c $< -o $@

##
## DEBUG BUILD
##

debug: CXXFLAGS += -g3 -DDEBUG
debug: re

##
## CLEAN RULES
##

clean:
	@echo "$(CYAN)[GUI]$(RESET) Removing object files..."
	@$(RM) -r $(OBJ_DIR)
	@echo "$(GREEN)[✓]$(RESET) Object files removed."

fclean: clean
	@echo "$(CYAN)[GUI]$(RESET) Removing binary..."
	@$(RM) $(NAME)
	@echo "$(GREEN)[✓]$(RESET) $(NAME) removed."

re: fclean all