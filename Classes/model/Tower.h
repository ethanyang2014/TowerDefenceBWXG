//
//  Tower.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__Tower__
#define __TowerDefenceBWXG__Tower__

#include <iostream>

#include "Defines.h"
USING_NS_CC;

class Tower : public Node
{
public:
    CREATE_FUNC_I(Tower);
    bool init(int id);
};


#endif /* defined(__TowerDefenceBWXG__Tower__) */
