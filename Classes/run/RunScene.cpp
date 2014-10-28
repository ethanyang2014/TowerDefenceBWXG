//
//  RunScene.cpp
//  TowerDefenceBWXG
//
//  Created by ethan yang on 14-9-6.
//
//

#include "RunScene.h"


RunScene::RunScene()
	: totalTurnip(INIT_COUNT_OF_TURNIP)
{
}


RunScene::~RunScene()
{}


bool RunScene::init()
{
    if(Scene::init())
    {
        
        _mapLayer = MapLayer::create(0);
        addChild(_mapLayer);

		_uiLayer = UILayer::create(450);
		this->addChild(_uiLayer);

        return true;
    }
    return false;
}