# =====================
# Compiler & Flags
# =====================
CC = gcc
CFLAGS = -Wall -Wextra -g3 \
	-Isrc/shared/headers \
	-Isrc/modulos/headers

# =====================
# Directories
# =====================
SRCDIR = src
OBJDIR = obj
BINDIR = bin

# =====================
# Target
# =====================
TARGET = $(BINDIR)/conversor

# =====================
# Source & Object Files
# =====================
SRC = \
	$(SRCDIR)/main.c \
	$(SRCDIR)/menus.c \
	$(SRCDIR)/shared/conversao.c \
	$(SRCDIR)/shared/estilo.c \
	$(SRCDIR)/shared/utils.c \
	$(SRCDIR)/modulos/espaco.c \
	$(SRCDIR)/modulos/massa.c \
	$(SRCDIR)/modulos/temperatura.c \
	$(SRCDIR)/modulos/tempo.c \
	$(SRCDIR)/modulos/volume.c

OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

# =====================
# Build Rules
# =====================
all: $(TARGET)

$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CC) $(OBJ) -o $(TARGET)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

# =====================
# Utilities
# =====================
clean:
	rm -rf $(OBJDIR) $(BINDIR)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
