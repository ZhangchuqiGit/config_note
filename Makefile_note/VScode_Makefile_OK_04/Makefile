
CCFLAGS = ${CFLAG}
CCFLAGS += -Wall -std=c++17 
# CCFLAGS += -Wall
# CCFLAGS += -std=c++17

######################################################

objects = main.o display.o echo.o # 使用变量
headers = header.h display.h echo.h 

###################################################### 

all:$(objects)
		g++ ${CCFLAGS} $(objects) -o all 

# 让 make 自动推导：收拢 文件
# main.o display.o: display.h header.h echo.h 
# $(objects): display.h header.h echo.h # 收拢 .o 文件
$(objects): $(headers) # 收拢 .o .h 文件

.PHONY: clean # .PHONY 表示 clean 是个伪目标
clean :
	-rm -rf all $(objects)
# -rm 的 ‘-’：即使某些文件出现问题，也不管了，继续做后面的事


# /usr/bin/c++ -Wall -g -ggdb -std=c++17 main.cpp.o -o main.o -lpthread -lsctp -lkqueue -lrt 

