CC = g++

# compiler flags:
#  -g     - this flag adds debugging information to the executable file
#  -Wall  - this flag is used to turn on most compiler warnings
CFLAGS  = -g -Wall -O1 -ftemplate-depth=10000

INC = include

%: day%/main.cpp
	echo "Making $@"
	$(CC) $(CFLAGS) -I$(INC) day$@/main.cpp
