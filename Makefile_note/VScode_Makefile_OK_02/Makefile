
CCFLAGS = ${CFLAG}
CCFLAGS += -Wall -std=c++17 
# CCFLAGS += -Wall
# CCFLAGS += -std=c++17

######################################################

objects = main.o display.o # 使用变量

###################################################### 

all:$(objects)
		g++ ${CCFLAGS} $(objects) -o all 

main.o:main.cpp header.h display.h
	g++ ${CCFLAGS} -c main.cpp -o main.o

display.o:display.cpp display.h header.h
	g++ ${CCFLAGS} -c display.cpp -o display.o

# .PHONY: clean # .PHONY 表示 clean 是个伪目标
clean :
	rm -rf all main.o display.o


# /usr/bin/c++ -Wall -g -ggdb -std=c++17 main.cpp.o -o main.o -lpthread -lsctp -lkqueue -lrt 

