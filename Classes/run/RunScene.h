//
//  RunScene.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__RunScene__
#define __TowerDefenceBWXG__RunScene__

#include <iostream>

#include "Defines.h"

#include "manager/Manager.h"

USING_NS_CC;

#include "map/MapLayer.h"

class RunScene : public Scene
{
public:
    CREATE_FUNC(RunScene);
    
    bool init();
public:
    MapLayer* _mapLayer;
};

#endif /* defined(__TowerDefenceBWXG__RunScene__) */
