CC = gcc
# Common flags (Warnings are always good)
CFLAGS_COMMON = -Wall -Wextra

# The Source Files
SRCS = main.c p1.c p2.c p3.c p4.c
# Convert .c to .o
OBJS = $(SRCS:.c=.o)

# 1. The "Phony" Targets (These aren't real files)
.PHONY: all debug release clean

# Default: Build debug if user just types 'make'
all: debug

# 2. DEBUG Target
# Syntax: target: variable += value
# We add -g (symbols) and -O0 (no optimization)
# We also define a macro -DDEBUG so you can use #ifdef DEBUG in C
debug: CFLAGS = $(CFLAGS_COMMON) -g -O0 -DDEBUG
debug: clean app_debug

# 3. RELEASE Target
# We add -O3 (Max Speed) and -s (Strip symbols)
release: CFLAGS = $(CFLAGS_COMMON) -O3 -s
release: clean app_release

# 4. Build Rules
# Note: We build directly from SRCS here to keep it simple and safe 
# so you don't mix debug/release object files.
app_debug: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o app_debug
	@echo "✅ Debug Build Complete: ./app_debug"

app_release: $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o app_release
	@echo "🚀 Release Build Complete: ./app_release"

# 5. Clean
clean:
	rm -f *.o app_debug app_release