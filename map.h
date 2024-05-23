#ifndef MAP_H
#define MAP_H

#include <vector>
#include "point.h"

class Map
{
public:
    Map()//默认构造函数，将正方形各点压入initmap
    {
        //左右两边两条
        for (int i = 1;i <= 30;i++) {
            initmap.emplace_back(Point(i, 1));
            initmap.emplace_back(Point(i, 30));
        }
        
        //上下两边两条
        for (int i = 2;i <= 29;i++) {
            initmap.emplace_back(Point(1, i));
            initmap.emplace_back(Point(30, i));
        }
    }
    void PrintInitmap();//绘制初始地图
private:
    std::vector<Point> initmap;//保存初始地图
};
#endif // MAP_H
