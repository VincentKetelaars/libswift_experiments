# Home directory of Swift version
SWIFT_HOME=/home/vincent/svn/libswift/ppsp
# Swift library (located in SWIFT_HOME)
SWIFT_LIB=swift
# Home directory of Libevent version
LIBEVENT_HOME=/home/vincent/svn/libswift/libevent21

# Executable name
EXECUTABLE=runner

# Flags
CPPFLAGS+=-Wall -g -I${SWIFT_HOME} -I.
LDFLAGS+=-L${SWIFT_HOME} -l${SWIFT_LIB} -L${LIBEVENT_HOME}/.libs -levent -lstdc++

# Compiler
CC=gcc

# Objects
OBJECTS=main.o test.o

# Standard Make call
all: myrun

# Implicit compilation : g++ (?) {CPPFLAGS} -c -o object.o object(-.o).cpp
myrun: ${OBJECTS}
	# Create executable with link to swift
	${CC} ${OBJECTS} -o ${EXECUTABLE} ${LDFLAGS}

# Clean up all objects and the executable (Could also use OBJECTS instead of *.o)
clean:
	rm -f *.o  ${EXECUTABLE}

# Not clear on this (something like, these are not actual objects(?) or so?)
.PHONY: all clean myrun