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
#include "ui/UILayer.h"

//�ܲ�������ʼֵ
#define INIT_COUNT_OF_TURNIP 450

class RunScene : public Scene
{
public:
    CREATE_FUNC(RunScene);
    
    bool init();

	RunScene();
	~RunScene();

public:
    MapLayer* _mapLayer;

	UILayer* _uiLayer;

	//�˵���ʾ���ܲ���������ʼֵΪ450
	unsigned short totalTurnip;
};

#endif /* defined(__TowerDefenceBWXG__RunScene__) */
