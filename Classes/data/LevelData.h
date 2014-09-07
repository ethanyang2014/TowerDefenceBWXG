//
//  LevelData.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__LevelData__
#define __TowerDefenceBWXG__LevelData__

#include <iostream>

#include "Defines.h"
USING_NS_CC;

class LevelData : public Node
{
public:
    CREATE_FUNC_I(LevelData);
    bool init(int id);
};

#endif /* defined(__TowerDefenceBWXG__LevelData__) */
