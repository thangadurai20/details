CC = gcc
CFLAGS = -Wall


TARGET = matrix_multiplication


SRCS = main.c allocate_matrix.c get_matrix_input.c multiply_matrices.c print_matrix.c free_matrix.c


OBJS = $(SRCS:.c=.o)


all: $(TARGET)


$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

allocate_matrix.o: allocate_matrix.c
	$(CC) $(CFLAGS) -c allocate_matrix.c

get_matrix_input.o: get_matrix_input.c
	$(CC) $(CFLAGS) -c get_matrix_input.c

multiply_matrices.o: multiply_matrices.c
	$(CC) $(CFLAGS) -c multiply_matrices.c

print_matrix.o: print_matrix.c
	$(CC) $(CFLAGS) -c print_matrix.c

free_matrix.o: free_matrix.c
	$(CC) $(CFLAGS) -c free_matrix.c

clean:
	rm -f *.o $(TARGET)
.PHONY: all clean

