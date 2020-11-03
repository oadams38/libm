
SRCS = m_root.c m_ceil.c m_floor.c m_round.c m_squ.c \
		m_squl.c 

CC = gcc

FLAGS = -g -c

libft.o : 
	$(CC) $(FLAGS) $(SRCS)
	
all: libft.o 
	ar rvs libm.a *.o 

clean:
	rm *.o

re: clean all