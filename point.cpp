#include "point.h"
#include "tools.h"
#include <iostream>

void Point::Print()//输出方块，用于边框
{
    SetCursorPosition(x, y);//设置光标位置
    std::cout << "■";//输出
}

void Point::PrintCircular()//输出圆形，用于蛇
{
    SetCursorPosition(x, y);//设置光标位置
    std::cout << "●";
}

void Point::Clear()//清除输出
{
    SetCursorPosition(x, y);//设置光标位置
    std::cout << "  ";
}

void Point::ChangePosition(const int x, const int y)//改变坐标
{
    this->x = x;
    this->y = y;
}