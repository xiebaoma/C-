#ifndef MAP_H
#define MAP_H

#include <vector>
#include "point.h"

class Map
{
public:
    Map()//Ĭ�Ϲ��캯�����������θ���ѹ��initmap
    {
        //������������
        for (int i = 1;i <= 30;i++) {
            initmap.emplace_back(Point(i, 1));
            initmap.emplace_back(Point(i, 30));
        }
        
        //������������
        for (int i = 2;i <= 29;i++) {
            initmap.emplace_back(Point(1, i));
            initmap.emplace_back(Point(30, i));
        }
    }
    void PrintInitmap();//���Ƴ�ʼ��ͼ
private:
    std::vector<Point> initmap;//�����ʼ��ͼ
};
#endif // MAP_H
