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
};

#endif /* defined(__TowerDefenceBWXG__EnemyData__) */
