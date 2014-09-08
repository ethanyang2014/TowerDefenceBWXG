//
//  TowerData.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-7.
//
//

#ifndef __TowerDefenceBWXG__TowerData__
#define __TowerDefenceBWXG__TowerData__

#include <iostream>

#include "Defines.h"
USING_NS_CC;

class TowerData : public Node
{
public:
    CREATE_FUNC_I(TowerData);
    bool init(int id);
public:
    //id
    CC_SYNTHESIZE(int, _id, Id);
    //levele
    CC_SYNTHESIZE(int, _level, Level);
    //攻击力
    CC_SYNTHESIZE(int, _attack_point, AttackPoint);
    //攻击频率
    CC_SYNTHESIZE(float, _attack_rate, AttackRate);
    //攻击范围
    CC_SYNTHESIZE(float, _attack_range, AttackRange);
};


#endif /* defined(__TowerDefenceBWXG__TowerData__) */
