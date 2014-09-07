//
//  MapLayer.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__MapLayer__
#define __TowerDefenceBWXG__MapLayer__

#include <iostream>

#include "Defines.h"
USING_NS_CC;

class MapLayer : public Layer
{
public:
    CREATE_FUNC_I(MapLayer);
    bool init(int id);
};


#endif /* defined(__TowerDefenceBWXG__MapLayer__) */
