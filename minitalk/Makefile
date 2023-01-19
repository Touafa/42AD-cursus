CLIENT = client.c
SERVER = server.c
CLIENT_NAME = client
SERVER_NAME = server

CC = gcc

FLAGS = -Wall -Wextra -Werror

RM = rm -rf

all:  $(CLIENT_NAME) $(SERVER_NAME)

$(SERVER_NAME) : $(SERVER)
	$(CC) $(FLAGS) minilibft.c $(SERVER) -o $(SERVER_NAME)

$(CLIENT_NAME) : $(CLIENT)
	$(CC) $(FLAGS) minilibft.c $(CLIENT) -o $(CLIENT_NAME)

clean:
	$(RM) server.o client.o

fclean: clean
	$(RM) server client

re: fclean all