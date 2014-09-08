//
//  EnemyData.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__EnemyData__
#define __TowerDefenceBWXG__EnemyData__

#include <iostream>

#include "Defines.h"
USING_NS_CC;

class EnemyData : public Node
{
public:
    CREATE_FUNC_I(EnemyData);
    bool init(int id);
public:
    //id
    CC_SYNTHESIZE(int, _id, Id);
    //每个格子的移动速度
    CC_SYNTHESIZE(int, _speed, Speed);
    //掉落金币
    CC_SYNTHESIZE(int, _drop_gold, dropGold);
};

#endif /* defined(__TowerDefenceBWXG__EnemyData__) */
