# Swift home
SWIFT_HOME=/home/vincent/svn/libswift/ppsp
LIBEVENT_HOME=/home/vincent/svn/libswift/libevent21

# Flags
CPPFLAGS+=-Wall -g -I${SWIFT_HOME} -I.
LDFLAGS+=-L${SWIFT_HOME} #-L${LIBEVENT_HOME} -L${LIBEVENT_HOME}/.libs -levent -lstdc++

# Compiler
CC=gcc

# Objects
objects=main.o test.o

# Standard
all: myrun

# Implicit compilation : g++ (?) {CPPFLAGS} -c -o object.o object(-.o).cpp
myrun: ${objects}
	# Create executable with link to swift
	${CC} ${objects} -o runner ${LDFLAGS}

# Clean up
clean:
	rm -f *.o  runner

# Not clear on this (something like, these are not actual objects(?) or so?)
.PHONY: all clean myrun