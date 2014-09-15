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

#include "data/TowerData.h"

#include "model/Enemy.h"

USING_NS_CC;

class Tower : public TowerData
{
public:
    CREATE_FUNC_I(Tower);
    bool init(int id);
public:
    //攻击
    void attack(float dt);
public:
    //敌人的引用
    Vector<Enemy*> _enemies;
    void setEnemies(Vector<Enemy*> *enemies);
    //目标敌人
    Enemy* _target;
};


#endif /* defined(__TowerDefenceBWXG__Tower__) */
