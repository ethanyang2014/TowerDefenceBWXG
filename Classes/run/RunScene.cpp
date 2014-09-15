//
//  RunScene.cpp
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#include "RunScene.h"

bool RunScene::init()
{
    if(Scene::init())
    {
        
        _mapLayer = MapLayer::create(0);
        addChild(_mapLayer);
        return true;
    }
    return false;
}