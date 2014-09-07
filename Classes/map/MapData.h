//
//  MapData.h
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#ifndef __TowerDefenceBWXG__MapData__
#define __TowerDefenceBWXG__MapData__

#include <iostream>

#include "Defines.h"
USING_NS_CC;

class MapData : public Node
{
public:
    CREATE_FUNC_I(MapData);
    bool init(int id);
};

#endif /* defined(__TowerDefenceBWXG__MapData__) */
