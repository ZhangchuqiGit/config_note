/* 先 键盘 ctrl+shift+B 运行 make -> Makefile 生产 二进制文件如 main.o
再运行 cpp
若 配置好 launch.json tasks.json， 直接 ctrl + F5  */

#include "header.h"
// #include "header_cc.h"

#include <iostream>

int main(void)
{
    // myprint();

    using namespace std;
    char c = 'f';
    int val = 0;
    val++;
    cout << "main()" << endl;
    display();
    echo();

    return 0;
}
