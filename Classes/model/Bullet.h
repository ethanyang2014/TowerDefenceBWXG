//
//  Bullet.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__Bullet__
#define __TowerDefenceBWXG__Bullet__

#include <iostream>

#include "Defines.h"
USING_NS_CC;

class Bullet : public Node
{
public:
    CREATE_FUNC_I(Bullet);
    bool init(int id);
};


#endif /* defined(__TowerDefenceBWXG__Bullet__) */
