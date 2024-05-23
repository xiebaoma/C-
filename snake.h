#ifndef SNAKE_H
#define SNAKE_H

#include <deque>
#include "point.h"
#include "food.h"

class Food;

/*
����һ�����㹹�ɣ���˫�˶��� deque �����
ÿ�Ե�һ��ʳ��ʹ�ͷ����ӣ�����ͼ�����ߵ�ͷ���Ǵ洢�����ݵ�β��
����������У��ߵ�ͷ������snake.back()
*/
class Snake
{
public:
    enum Direction { UP, DOWN, LEFT, RIGHT };//��ö�ٴ��������Ϣ

    Snake() {
        //�����ߵĳ�ʼ���ȣ��������㹹��
        snake.emplace_back(14, 8);
        snake.emplace_back(15, 8);
        snake.emplace_back(16, 8);
        //�����ߵĳ�ʼ��������
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
    friend class Food;//��Food����Ϊ��Ԫ���Ա������˽��Ԫ��
};
#endif // SNAKE_H
