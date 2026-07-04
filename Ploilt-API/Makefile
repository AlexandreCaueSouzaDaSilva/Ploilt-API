CC = gcc

TARGET = ploilt.exe

SRC = src/main.c
SERVER = src/server.c
LIB = civetweb/src/civetweb.c

CFLAGS = -DNO_SSL -Wall -Wextra -Icivetweb/src
WARNINGS = -Wno-unused-parameter -Wno-format -Wno-cast-function-type

LDFLAGS = -lws2_32 -lwsock32

all: $(TARGET)

$(TARGET): $(SRC) $(SERVER) $(LIB)
	$(CC) $(CFLAGS) $(WARNINGS) $(SRC) $(SERVER) $(LIB) -o $(TARGET) $(LDFLAGS)

clean:
	del $(TARGET)