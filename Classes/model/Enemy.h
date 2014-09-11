//
//  Enemy.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__Enemy__
#define __TowerDefenceBWXG__Enemy__

#include <iostream>

#include "Defines.h"

USING_NS_CC;

class Enemy : public Node
{
public:
    CREATE_FUNC_I(Enemy);
    bool init(int id);
};



#endif /* defined(__TowerDefenceBWXG__Enemy__) */
