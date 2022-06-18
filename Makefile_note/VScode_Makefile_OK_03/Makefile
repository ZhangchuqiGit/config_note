
CCFLAGS = ${CFLAG}
CCFLAGS += -Wall -std=c++17 
# CCFLAGS += -Wall
# CCFLAGS += -std=c++17

######################################################

objects = main.o display.o # 使用变量

###################################################### 

all:$(objects)
		g++ ${CCFLAGS} $(objects) -o all 

# 让 make 自动推导
main.o: header.h display.h
display.o: display.h header.h

.PHONY: clean # .PHONY 表示 clean 是个伪目标
clean :
	-rm -rf all main.o display.o 
# -rm 的 ‘-’：即使某些文件出现问题，也不管了，继续做后面的事


# /usr/bin/c++ -Wall -g -ggdb -std=c++17 main.cpp.o -o main.o -lpthread -lsctp -lkqueue -lrt 

