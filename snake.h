#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include "point.h"
#include "food.h"

class Food;

/*
蛇由一个个点构成，用双端队列 deque 储存点
每吃到一个食物，就从头部添加，所以图像中蛇的头部是存储蛇数据的尾部
在这个程序中，蛇的头部就是snake.back()
*/
class Snake
{
public:
    enum Direction { UP, DOWN, LEFT, RIGHT };//用枚举储存键盘信息

    Snake() {
        //设置蛇的初始长度，由三个点构成
        snake.emplace_back(14, 8);
        snake.emplace_back(15, 8);
        snake.emplace_back(16, 8);
        //设置蛇的初始方向，向下
        direction = Direction::DOWN;
    }
    void InitSnake();
    void Move();
    void NormalMove();
    bool OverEdge();
    bool HitItself();
    bool ChangeDirection();
    bool GetFood(const Food&);
    bool GetBigFood(Food&);
private:
    std::deque<Point> snake;
    Direction direction;
    friend class Food;//将Food类置为友元，以便访问其私有元素
};
#endif // SNAKE_H
