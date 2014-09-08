//
//  PointItem.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-8.
//
//

#ifndef __TowerDefenceBWXG__PointItem__
#define __TowerDefenceBWXG__PointItem__

#include <iostream>

#include "Defines.h"

USING_NS_CC;

class PointItem : public Node
{
public:
    CREATE_FUNC_I_I(PointItem);
    bool init(int xn, int yn);
public:
    int _xn;
    int _yn;
};

#endif /* defined(__TowerDefenceBWXG__PointItem__) */
