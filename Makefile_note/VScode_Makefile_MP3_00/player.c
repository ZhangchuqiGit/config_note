
/* 先 键盘 ctrl+shift+B 运行 make -> Makefile 生产 二进制文件如 main.o
再运行 cpp
若 配置好 launch.json tasks.json， 直接 ctrl + F5  */

// #include "header.h"

#include<stdio.h>
#include "lcd.h"
#include "usb.h"
#include "media.h"

int main()
{
	printf("MP3 player init...\n");
	lcd_init();
	usb_init();
	media_init();
	return 0;
}
