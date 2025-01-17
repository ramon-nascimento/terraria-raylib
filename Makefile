# Nome do executável
TARGET = main

# Diretórios
SRC_DIR = src
INCLUDE_DIR = includes

# Busca todos os arquivos .cpp em SRC_DIR
SRC = main.c $(wildcard $(SRC_DIR)/*.c)

# Flags do compilador
CXX = gcc
CXXFLAGS = -I$(INCLUDE_DIR) -Wall -g
LDFLAGS = -lraylib -lm -ldl -lpthread -lGL -lrt -lX11

# Regras
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET)

.PHONY: all clean

