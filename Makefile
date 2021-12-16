CC = g++

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall -O1 -ftemplate-depth=10000

INC = include

%a: day%/a.cpp
	$(CC) $(CFLAGS) -I$(INC) $^

%b: day%/b.cpp
	$(CC) $(CFLAGS) -I$(INC) $^
