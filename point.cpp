#include "point.h"
#include "tools.h"
#include <iostream>

void Point::Print()//������飬���ڱ߿�
{
    SetCursorPosition(x, y);//���ù��λ��
    std::cout << "��";//���
}

void Point::PrintCircular()//���Բ�Σ�������
{
    SetCursorPosition(x, y);//���ù��λ��
    std::cout << "��";
}

void Point::Clear()//������
{
    SetCursorPosition(x, y);//���ù��λ��
    std::cout << "  ";
}

void Point::ChangePosition(const int x, const int y)//�ı�����
{
    this->x = x;
    this->y = y;
}