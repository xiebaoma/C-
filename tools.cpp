/*
Tools工具类主要是用于设置光标的位置以及输出文字的颜色。
只需要记住每个函数的用处。
底层原理涉及Windows API,看不懂不用管。
*/

#include "tools.h"
#include <windows.h>
#include <stdio.h>

void SetWindowSize(int cols, int lines)//设置窗口大小
{
    system("title GreedSnake");//设置窗口标题
    char cmd[30];// 创建命令字符串缓冲区
    sprintf_s(cmd, "mode con cols=%d lines=%d", cols * 2, lines);//一个图形■占两个字符，故宽度乘以2
    system(cmd);//类似于system(mode con cols=88 lines=88)，设置窗口宽度和高度
}

void SetCursorPosition(const int x, const int y)//设置光标位置
{
    // 定义一个 COORD 结构体变量，用于存储光标的位置信息
    COORD position;

    position.X = x * 2;// 将 x 坐标乘以 2，因为每个字符的宽度是 2 个位置
    position.Y = y;

    // 使用 Windows API 函数 SetConsoleCursorPosition 设置光标位置
    // GetStdHandle(STD_OUTPUT_HANDLE) 获取标准输出设备的句柄
    // position 是一个 COORD 结构体，包含了要设置的新的光标位置
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

void SetColor(int colorID)//设置文本颜色
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorID);
}

void SetBackColor()//设置文本背景色
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        FOREGROUND_BLUE |
        BACKGROUND_BLUE |
        BACKGROUND_GREEN |
        BACKGROUND_RED);
}
