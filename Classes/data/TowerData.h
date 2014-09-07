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
};


#endif /* defined(__TowerDefenceBWXG__TowerData__) */
