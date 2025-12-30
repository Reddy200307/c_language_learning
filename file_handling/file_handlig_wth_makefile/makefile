CC =gcc
CFLAGS_COMMON = -Wall -Wextra -fsanitize=address -fsanitize=undefined -g
SRCS =src/main.c src/header.h src/viewFileData.c src/AddData.c
OBJS=$(SRCS:.c=.o)

a.out:$(OBJS)
	$(CC) $(CFLAGS_COMMON) $(OBJS) -o a.out

%.o : %.c
	$(CC) -c $< -o $@
clean:
	rm -f src/*.o a.out
